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
map<ll,ll>mp;
vector<ll>v[N];
set<ll>s;
ll tot=0,ma=0;
ll cnt[N];
void dfs(ll nd)
{
    vis[nd]=1;
    mp[aarray[nd]]++;
    ma=max(ma,mp[aarray[nd]]);
    tot++;
    for(int i=0; i<v[nd].size(); i++)
    {
        ll k=v[nd][i];
        if(vis[k]==0)
        {
            dfs(k);
        }
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m>>k;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=m; i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    ans=0;
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0&&v[i].size())
        {
            tot=ma=0;
            mp.clear();
            dfs(i);
            //cout<<i<<" "<<tot<<" "<<ma<<endl;
            ans+=tot-ma;
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
