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
ll magic[R][R];
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
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
ll dis[N],dis2[N],vis2[N];
void dfs2(ll nd,ll ds)
{
    dis2[nd]=ds;
    vis2[nd]=1;
    ll i;
    for(i=0;i<ed[nd].size();i++)
    {
        ll a=ed[nd][i];
        if(!vis2[a])
        {
            dfs2(a,ds+1);
        }
    }

}
void dfs(ll nd,ll ds)
{
    dis[nd]=ds;
    vis[nd]=1;
    ll i;
    for(i=0;i<ed[nd].size();i++)
    {
        ll a=ed[nd][i];
        if(!vis[a]&&ed[a].size()>1)
        {
            dfs(a,ds+1);
        }
    }

}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        ed[i].clear();
        vis[i]=dis[i]=vis2[i]=dis2[i]=0;
    }
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        ed[a].push_back(b);
        ed[b].push_back(a);
    }

    for(i=1;i<=n;i++)
    {
        if(ed[i].size()==1)
        {
            dfs(i,0LL);
            break;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(dis[i]==2)
        {
            dfs2(i,0LL);
            break;
        }
    }
    ll one=0,two=0;

    for(i=1;i<=n;i++)
    {
        if(dis2[i]==1)
        {
            one++;
        }
        else if(dis2[i]==2)
        {
            two++;
        }
    }
    cout<<one<<"  "<<two/one<<"\n";
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



