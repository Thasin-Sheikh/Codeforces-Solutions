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
ll col[N];
set<ll>s[N];
vector<ll>v[N];
void dfs(ll cur)
{
    ll i,j,k,l;
    vis[cur]=1;
    for(i=0; i<v[cur].size(); i++)
    {
        k=v[cur][i];
        if(col[k]!=col[cur])
            s[col[cur]].insert(col[k]);
        if(vis[k]==0)
        {
            dfs(k);
        }

    }
}
ll flag[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans=INT_MAX,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>col[i];
        flag[i]=col[i];
    }
    for(i=1; i<=m; i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
            dfs(i);
    }
    ll len=0;
    sort(col+1,col+n+1);
    for(i=1; i<=n; i++)
    {
        if((ll)s[col[i]].size()>len)
        {
            len=(ll)s[col[i]].size();
            ans=col[i];
        }
    }
    if(ans==INT_MAX)
    {
        ans=col[1];
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

