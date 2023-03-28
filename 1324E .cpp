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
ll n,l,r,t,q;
ll dp[3005][3005];
ll ddp(ll sum,ll index)
{
    if(index>n)
    {
        return 0;
    }
    if(dp[sum][index]!=-1)
    {
        return dp[sum][index];
    }
    ll asum,bsum,ans=0,ans2=0;
    bsum=t+sum+aarray[index];
    asum=t+sum+aarray[index]-1;
    bsum%=t,asum%=t;
   // cout<<index<<" "<<bsum<<" "<<asum<<endl;
    if(asum>=l&&asum<=r)
    {
        ans+=1+ddp(asum,index+1);
    }
    else
    {
        ans+=ddp(asum,index+1);
    }
    if(bsum>=l&&bsum<=r)
    {
        ans2+=1+ddp(bsum,index+1);
    }
    else
    {
        ans2+=ddp(bsum,index+1);
    }
    //cout<<ans<<" "<<ans2<<" "<<index<<endl;
    return dp[sum][index]=max(ans,ans2);
}
void solve()
{
    ll i,j,k,m,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>t>>l>>r;
    memset(dp,-1,sizeof(dp));
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    ans=ddp(0LL,1LL);
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,tt;
    tt=1;
    while(tt--)
    {
        solve();
    }
    return 0;
}
