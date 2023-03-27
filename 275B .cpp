///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using myset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
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
const long long  maxval=1e18;
const long long minval=-1e18;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>v;
    cin>>n>>m;
    char ch [n+1][m+1];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='B')
            {
                v.push_back({i,j});
            }
        }
    }
    for(i=0; i<v.size(); i++)
    {
        for(j=0; j<v.size(); j++)
        {
            if(i==j)
            {
                continue;
            }
            ll r1,r2,c1,c2;
            r1=v[i].first;
            c1=v[i].second;
            r2=v[j].first;
            c2=v[j].second;
            sum=0;
            //coloumn check
            if(c1>c2)
            {
                for(p=c1; p>=c2; p--)
                {
                    if(ch[r1][p]=='W')
                    {
                        sum++;
                    }
                }
                if(r1<r2)
                {
                    for(p=r1; p<=r2; p++)
                    {
                        if(ch[p][c2]=='W')
                        {
                            sum++;
                        }
                    }
                }
                else
                {
                    for(p=r1; p>=r2; p--)
                    {
                        if(ch[p][c2]=='W')
                        {
                            sum++;
                        }
                    }

                }
            }
            else
            {
                for(p=c1; p<=c2; p++)
                {
                    if(ch[r1][p]=='W')
                    {
                        sum++;
                    }
                }
                if(r1<r2)
                {
                    for(p=r1; p<=r2; p++)
                    {
                        if(ch[p][c2]=='W')
                        {
                            sum++;
                        }
                    }

                }
                else
                {
                    for(p=r1; p>=r2; p--)
                    {
                        if(ch[p][c2]=='W')
                        {
                            sum++;
                        }
                    }
                }
            }
            if(sum==0)
            {
                continue;
            }
            sum=0;
            if(r1<r2)
            {
                for(p=r1; p<=r2; p++)
                {
                    if(ch[p][c1]=='W')
                    {
                        sum++;
                    }
                }
                if(c1<c2)
                {
                    for(p=c1; p<=c2; p++)
                    {
                        if(ch[r2][p]=='W')
                        {
                            sum++;
                        }
                    }
                }
                else
                {
                    for(p=c1; p>=c2; p--)
                    {
                        if(ch[r2][p]=='W')
                        {
                            sum++;
                        }
                    }

                }
            }
            else
            {
                for(p=r1; p>=r2; p--)
                {
                    if(ch[p][c1]=='W')
                    {
                        sum++;
                    }
                }
                if(c1<c2)
                {
                    for(p=c1; p<=c2; p++)
                    {
                        if(ch[r2][p]=='W')
                        {
                            sum++;
                        }
                    }
                }
                else
                {
                    for(p=c1; p>=c2; p--)
                    {
                        if(ch[r2][p]=='W')
                        {
                            sum++;
                        }
                    }

                }
            }
            if(sum)
            {
                cout<<"NO"<<"\n";
                return ;
            }
        }
    }
    cout<<"YES"<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
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

