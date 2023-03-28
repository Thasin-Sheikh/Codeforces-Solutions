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
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll dp[5005][5005];
ll n,m;
ll csum[N];
ll  ddp(ll ind,ll k)
{
    if(k==0)
    {
        return 0;
    }
    if(ind>n)
        return -100000000000000000;
    if(dp[ind][k]!=-1)
    {
        return dp[ind][k];
    }
    ll a=0,b;
    if(ind+m-1<=n)
    {
        a=csum[ind+m-1]-csum[ind-1]+ddp(ind+m,k-1);
    }
    b=ddp(ind+1,k);
    return dp[ind][k]=max(a,b);
}
void solve()
{
    ll i,j,k,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        csum[i]+=aarray[i]+csum[i-1];
    }
    memset(dp,-1,sizeof(dp));
    cout<<ddp(1,k);
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
