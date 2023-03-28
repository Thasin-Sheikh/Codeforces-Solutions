///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R],iindex[R][R],ex[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>magic[i][j];
            iindex[i][j]=magic[i][j];
            ex[i][j]=iindex[i][j];
            if(j!=magic[i][j])
            {
                sum++;
            }
        }
    }
    if(sum==0)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j!=magic[i][j])
            {
                swap(magic[i][j],magic[i][magic[i][j]]);
                break;
            }
        }
    }
    ll f=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j!=magic[i][j])
            {
                f=0;
                break;
            }
        }
        if(!f)
        {
            break;
        }
    }
    if(f)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j!=iindex[i][j])
            {
                for(k=1;k<=n;k++)
                {
                    swap(iindex[k][j],iindex[k][iindex[i][j]]);
                }
                for(l=1;l<=n;l++)
                {
                    for(r=1;r<=m;r++)
                    {
                        if(r!=iindex[l][r])
                        {
                            swap(iindex[l][r],iindex[l][iindex[l][r]]);
                            break;
                        }
                    }
                }
            }
            f=1;
            for(l=1;l<=n;l++)
            {
                for(r=1;r<=m;r++)
                {
                    if(r!=iindex[l][r])
                    {
                        f=0;
                        break;
                    }
                }
                if(!f)
                {
                    break;
                }
            }
            if(f)
            {
                cout<<"YES"<<"\n";
                return ;
            }
            else
            {
                for(l=1;l<=n;l++)
                {
                    for(r=1;r<=m;r++)
                    {
                        iindex[l][r]=ex[l][r];
                    }
                }
            }
        }
    }
    cout<<"NO"<<"\n";

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


