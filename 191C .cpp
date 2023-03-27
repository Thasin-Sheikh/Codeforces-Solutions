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
//ll  seg[400000+10];
map<pair<ll,ll>,ll>ans;
ll depth[N],nodes[N], last[N];
ll pos=1;
ll val[N];
ll st[300005][30];
void dfs(ll nd,ll dp)
{
    ll i,j,k;
    vis[nd]=1;
    depth[pos]=dp;
    nodes[pos]=nd;
    last[nd]=max(last[nd],pos);
    pos++;
    for(i=0; i<ed[nd].size(); i++)
    {
        k=ed[nd][i];
        if(vis[k])
        {
            continue;
        }
        dfs(k,dp+1);
        depth[pos]=dp;
        nodes[pos]=nd;
        last[nd]=max(last[nd],pos);
        pos++;

    }
}
ll getans(ll pa,ll nd)
{
    ll i,j,k;
    ll sm=0;
    for(i=0; i<ed[nd].size(); i++)
    {
        k=ed[nd][i];
        if(pa==k)
        {
            continue;
        }
        ll p=getans(nd,k);
        ans[ {nd,k}]=p;
        ans[ {k,nd}]=p;
        sm+=p;
    }
    sm+=val[nd];
    return sm;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>v;
    cin>>n;
    for(i=1; i<n; i++)
    {
        cin>>a>>b;
        ed[a].push_back(b);
        ed[b].push_back(a);
        v.push_back({a,b});
    }
    dfs(1LL,0LL);
    pos--;
    for(i=1; i<=pos; i++)
    {
        st[i][0]=i;
    }
    for(j=1; (1LL<<j)<=pos; j++)
    {
        for(i=1; (i+(1LL<<j)-1)<=pos; i++)
        {
            if(depth[st[i][j-1]]<depth[st[i+(1LL<<(j-1))][j-1]])
            {
                st[i][j]=st[i][j-1];
            }
            else
            {
                st[i][j]=st[(i+(1LL<<(j-1)))][j-1];
            }
        }
    }
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        val[l]++;
        val[r]++;
        a=min(last[l],last[r]);
        b=max(last[l],last[r]);
        //cout<<a<<" "<<b<<"\n";
        c=b-a+1;
        d=log2(c);
        //cout<<d<<"\n";
        //a=min(depth[st[a][d]],depth[st[a+c-(1LL<<d)][d]]);
        //  cout<<st[a][d]<<" "<<st[a+c-(1LL<<d)][d]<<"\n";
        ll aa=st[a][d];
        b=st[a+c-(1LL<<d)][d];
        //cout<<aa<<" "<<b<<"\n";
        a=min(depth[aa],depth[b]);
        if(a==depth[aa])
        {
            a=aa;
        }
        else
            a=b;
        val[nodes[a]]-=2;
        // cout<<a<<" "<<nodes[a]<<"\n";
        //cout<<a<<"\n";
    }
    getans(-1LL,1LL);
    for(i=0;i<v.size();i++)
    {
        cout<<ans[v[i]]<<" ";
    }
    cout<<"\n";

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
