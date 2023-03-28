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
    ll i,j,k,m,n,l,r,q,p,sum=0,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    ll a[n+1][m+1],ans[n+1][m+1];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>a[i][j];
            ans[i][j]=-1;
        }
    }
    vector<pair<pair<ll,ll>,ll>>vp;
    for(i=1;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
            if(a[i][j]!=ans[i][j])
            {

                 if(j-1>0&&a[i][j]==a[i][j-1])
                {
                    ans[i][j]=ans[i][j-1]=ans[i+1][j]=ans[i+1][j-1]=a[i][j];
                    vp.push_back({{i,j-1},a[i][j]});

                }
                else if((ans[i][j+1]==a[i][j])||ans[i][j+1]==-1)
                {
                    ans[i][j]=ans[i][j+1]=ans[i+1][j]=ans[i+1][j+1]=a[i][j];
                    vp.push_back({{i,j},a[i][j]});
                }

                else
                {
                    cout<<-1<<"\n";
                    return ;
                }
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j]!=ans[i][j])
            {
                cout<<-1<<"\n";
                return ;
            }
        }
    }
    cout<<vp.size()<<"\n";
    for(i=0;i<vp.size();i++)
    {
        cout<<vp[i].first.first<<" "<<vp[i].first.second<<" "<<vp[i].second<<"\n";
    }

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

