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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<pair<ll,ll>,ll>mp;
vector<ll>v[N];
ll num[N],parent[N];
ll dlt[N];
void dfs(ll node,ll tot)
{
    ll i,j,k;
    vis[node]=1;
    for(i=0;i<v[node].size();i++)
    {
        k=v[node][i];
        if(vis[k])
        {
            continue;
        }
        parent[k]=node;
        dfs(k,max(mp[{k,node}]+tot,mp[{k,node}]));
    }
    if(tot>aarray[node])
    {
        dlt[node]=-1;
    }
}
void cnl(ll nd)
{
    ll i,j,k;
    num[nd]=-1;
    for(i=0;i<v[nd].size();i++)
    {
        k=v[nd][i];
        if(k!=parent[nd]&&num[k]!=-1)
        {
            cnl(k);
        }
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<n; i++)
    {
        cin>>l>>r;
        v[l].push_back(i+1);
        v[i+1].push_back(l);
        mp[{i+1,l}]=mp[ {l,i+1}]=r;
    }
    parent[1]=0;
    dfs(1LL,0LL);
    for(i=1;i<=n;i++)
    {
        if(dlt[i]==-1&&num[i]!=-1)
        {
            cnl(i);
        }
    }
    ans=0;
    for(i=1;i<=n;i++)
    {
        if(num[i]==-1)
        {
            ans++;
        }
    }
    cout<<ans<<"\n";
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
