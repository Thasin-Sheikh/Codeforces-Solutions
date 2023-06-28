///*Bismillahir Rahmanir Rahim***///
///**Author thasin_sheikh**///
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
typedef tree<ll ,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
bool sortbyCond(const pair<ll, ll>& a,const pair<ll, ll>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}
ll aarray[N];
ll magic[1005][1005];
vector<ll>primes;
//priority_queue<ll>pq;// from max to min
//bool check[1000001];
//ll large[10000005];
//int dx[] = {-1 , 0 , 1 , 0};
//int dy[] = {0 , 1 , 0 , -1};
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
ll vis[1005][1005];
vector<ll>ed[N];
map<ll,ll>mp;
unordered_map<ll,ll>ump;
ll n,m;
ll ans=0;
ll sum=0;
void dfs(ll r,ll c)
{
    sum+=magic[r][c];
    vis[r][c]=1;
    if(r+1<=n&&vis[r+1][c]==0&&magic[r+1][c]!=0)
    {
        dfs(r+1,c);
    }
    if(r-1>=1&&vis[r-1][c]==0&&magic[r-1][c]!=0)
    {
        dfs(r-1,c);
    }
    if(c+1<=m&&vis[r][c+1]==0&&magic[r][c+1]!=0)
    {
        dfs(r,c+1);
    }
    if(c-1>=1&&vis[r][c-1]==0&&magic[r][c-1]!=0)
    {
        dfs(r,c-1);
    }

}
void solve()
{
    ll i,j,k,l,r,q,p,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>magic[i][j];
            vis[i][j]=0;
        }
    }
    ans=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(vis[i][j]==0&&magic[i][j]!=0)
            {
                sum=0;
                dfs(i,j);
                ans=max(ans,sum);
            }
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

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




