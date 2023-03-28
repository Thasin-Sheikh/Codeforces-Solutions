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
typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
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
//priority_queue<ll>pq;// from max to min
/*ll  seg[400000+10];
void build(ll node,ll st,ll en)
{
    if(st==en)
    {
        seg[node]=aarray[st];
        return ;
    }
    ll mid=(st+en)/2;
    ll lft=node*2;
    ll rght=node*2+1;
    build(lft,st,mid);
    build(rght,mid+1,en);
    seg[node]=min(seg[lft],seg[rght]);
    return ;
}
ll query(ll node,ll st,ll en,ll l,ll r)
{
    if(st>=l&&en<=r)
    {
        return seg[node];
    }
    if(r<st||l>en)
    {
        return INT_MAX;
    }
    ll mid=(st+en)/2;
    ll lft=2*node;
    ll rght=2*node+1;
    ll ret=query(lft,st,mid,l,r);
    ll ret1=query(rght,mid+1,en,l,r);
    return min(ret,ret1);

}*/
ll dp[N][5];
map<pair<ll,ll>,ll>ml;
void dfs(ll pa,ll nd)
{
    if(ed[nd].size()==1&&nd!=1)
    {
        dp[nd][0]=dp[nd][1]=aarray[nd];
        return;

    }
    vector<ll>v1;
    for(ll i=0;i<ed[nd].size();i++)
    {
       // cout<<1<<'\n';
        ll k=ed[nd][i];
        if(k==pa)
            continue;
        dfs(nd,k);
        v1.push_back(max(0LL,(dp[k][0]-ml[{nd,k}])));
    }
    sort(v1.rbegin(),v1.rend());
    if(v1.size()==1)
    {
        dp[nd][0]=max(dp[nd][0],v1[0]+aarray[nd]);
        dp[nd][1]=0;
    }
    else
    {
        dp[nd][0]=max(dp[nd][0],v1[0]+aarray[nd]);
        dp[nd][1]=max(dp[nd][1],v1[0]+v1[1]+aarray[nd]);
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<n; i++)
    {
        cin>>a>>b>>c;
        ed[a].push_back(b);
        ed[b].push_back(a);
        ml[{a,b}]=ml[{b,a}]=c;
    }
    if(n==1)
    {
        cout<<aarray[1]<<"\n";
        return ;
    }
    dfs(-1LL,1LL);
    ans=0;
    for(i=1;i<=n;i++)
    {
        //cout<<i<<" "<<dp[i][0]<<" "<<dp[i][1]<<"\n";
        ans=max(ans,max(dp[i][0],dp[i][1]));
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
    //add and subtract

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




