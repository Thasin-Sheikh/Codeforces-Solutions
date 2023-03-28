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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N],vis2[N];;
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
vector<ll>v;
ll cnt[N];
ll ans=0;
ll dep[N];
ll  dfs(ll node)
{
    vis[node]=1;
    if(ed[node].size()==1)
    {
        return 1;
    }
    for(int i=0; i<ed[node].size(); i++)
    {
        ll a=ed[node][i];
        if(vis[a])
        {
            continue;
        }
        cnt[node]+=dfs(a);
        dep[node]++;
    }
    return cnt[node];
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    cin>>n;
    v.clear();
    for(i=1; i<=n; i++)
    {
        cnt[i]=1;
        ed[i].clear();
        vis[i]=vis2[i]=0;
    }
    for(i=1; i<n; i++)
    {
        cin>>a>>b;
        ed[a].push_back(b);
        ed[b].push_back(a);
    }
    a=ed[1][0];
    if(ed[1].size()==1)
    {
        cout<<n-2<<"\n";
        return ;
    }
    b=ed[1][1];
    vis[1]=1;
    a=dfs(a);
    b=dfs(b);
    for(i=1;i<=n;i++)
    {
        cout<<dep[i]<<" ";
    }
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

