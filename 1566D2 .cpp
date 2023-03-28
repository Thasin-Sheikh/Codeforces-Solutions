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
const long maxn=5e5+10;
ll aarray[500][500];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    ll ans[500][500];
    bool yes=true;
    vector<ll>v,vc;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            ans[i][j]=aarray[i][j]=0;
        }
    }
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=m; i++)
        {
            cin>>l;
            v.push_back(l);

        }
    }
    vc=v;
    sort(vc.rbegin(),vc.rend());
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            aarray[i][j]=vc.back();
            vc.pop_back();
        }
    }
    for(i=0; i<v.size(); i++)
    {

        ll f=0;
        l=-1,r=-1;
        for(j=m; j>=1; j--)
        {
            for(k=n; k>=1; k--)
            {
                if(aarray[k][j]==v[i])
                {
                   // cout<<k<<" "<<j<<endl;
                    if(j==m)
                    {
                        ans[k][j]=1;
                        aarray[k][j]=1000000000000;
                        for(p=j-1; p>=1; p--)
                        {
                            if(ans[k][p])
                            {
                                sum++;
                            }
                        }
                        f=1;
                    }
                    else if(j+1<=m&&ans[k][j+1]==1)
                    {
                        //cout<<1<<endl;
                        ans[k][j]=1;
                        aarray[k][j]=1000000000000;
                        for(p=j-1; p>=1; p--)
                        {
                            if(ans[k][p])
                            {
                                sum++;
                            }
                        }
                        f=1;
                    }
                    else if(l==-1)
                    {
                        l=k,r=j;
                    }
                }
                if(f)
                {
                    break;
                }
            }
            if(f)
            {
                break;
            }
        }
       // cout<<f<<endl;
        if(f==0)
        {
         //cout<<l<<" "<<r<<endl;
            ans[l][r]=1;
            aarray[l][r]=1000000000000;
            for(p=r-1; p>=1; p--)
            {
                if(ans[l][p])
                {
                    sum++;
                }
            }
        }
    }
    cout<<sum<<"\n";

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


