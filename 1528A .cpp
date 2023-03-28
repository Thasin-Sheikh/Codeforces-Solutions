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
ll l[N],r[N];
vector<ll>v[N];
ll dp[N][5];
void dfs(ll nod,ll par)
{
    ll i,j,k;
    for(i=0;i<v[nod].size();i++)
    {
        k=v[nod][i];
        if(k!=par)
        {
            dfs(k,nod);
            dp[k][0]+=max(abs(l[nod]-l[k])+dp[k][0],abs(l[nod]-r[k])+dp[k][1]);
            dp[k][1]+=max(abs(r[nod]-l[k])+dp[k][0],abs(r[nod]-r[k])+dp[k][1]);
        }
    }
}
void solve()
{
    ll i,j,k,m,n,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>l[i]>>r[i];
        v[i].clear();
        dp[i][0]=dp[i][1]=0;
    }
    ll x,y;
    for(i=1; i<n; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1,0);
    ans=max(dp[1][0],dp[1][1]);
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
