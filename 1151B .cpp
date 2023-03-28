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
ll magic[R][R];
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
    set<ll>s;
    ll x;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>magic[i][j];
            s.insert(magic[i][j]);
            if(i==1&&j==1)
            {
                x=magic[i][j];
            }
            else
            {
                if(j==1)
                {
                    x^=magic[i][j];
                }
            }

        }
    }
    if(s.size()==1&&n!=1)
    {
        cout<<"NIE"<<"\n";
        return ;
    }
    if(x!=0)
    {
        cout<<"TAK"<<"\n";
        for(i=1;i<=n;i++)
        {
            cout<<1<<" ";
        }
        return ;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            for(j=2;j<=m;j++)
            {
                if(magic[i][j]!=magic[i][j-1])
                {
                    cout<<"TAK"<<"\n";
                    for(k=1;k<=n;k++)
                    {
                        if(k!=i)
                        {
                            cout<<1<<" ";
                        }
                        else cout<<j<<" ";
                    }
                    return ;
                }
            }
        }

    }
    cout<<"NIE"<<"\n";
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


