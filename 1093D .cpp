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
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
ll mod=998244353;
ll power[N+100];
vector<ll>v[N];
ll how[5];
bool yes=true;
void dfs(ll val,ll c)
{
    vis[val]=c;
    how[c]++;
    for(auto g:v[val])
    {
        if(vis[g]==-1)
        {
            dfs(g,1-c);
        }
        if((vis[val]^vis[g])==0)
        {
            yes=false;
            return ;
        }
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        v[i].clear();
        vis[i]=-1;
    }
    for(i=1;i<=m;i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    ans=1;
    for(i=1;i<=n;i++)
    {
        if(vis[i]!=-1)
            continue;
        how[0]=how[1]=0;
        yes=true;
        dfs(i,0);
        if(yes==false)
        {
            cout<<0<<"\n";
            return ;
        }
        //cout<<how[1]<<" "<<how[0]<<endl;
        ll cur=(power[how[1]]+power[how[0]]);
        //cout<<cur<<endl;
        cur%=mod;
        ans*=cur;
        ans%=mod;
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
    power[0]=1;
    for(i=1; i<=N; i++)
    {
        power[i]=(2*power[i-1])%mod;

    }
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


