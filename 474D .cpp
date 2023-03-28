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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
ll k;
ll dp[N];
ll getans(ll vl)
{
    if(vl==0)
    {
        return 1;
    }
    if(dp[vl]!=-1)
    {
        return dp[vl];
    }
    ll ans=0;
    if(vl>=k)
    ans+=getans(vl-k),ans%=MOD;
    ans+=getans(vl-1),ans%=MOD;
    return dp[vl]=ans%MOD;
}
void solve()
{
    ll i,j,m,n,l,r,a,b,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    for(i=0;i<=100000;i++)
    {
        dp[i]=-1;
    }
    for(i=1;i<=100000;i++)
    {
        vis[i]=vis[i-1]+getans(i);
    }
    while(n--)
    {
        cin>>a>>b;
        ans=vis[b]-vis[a-1];
        ans%=MOD;
        cout<<ans<<"\n";
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
    makefast__
    string str;
    ll i,j,n,m,t;
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

