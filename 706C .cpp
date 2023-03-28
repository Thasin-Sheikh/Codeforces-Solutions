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
string val[N];
ll dp[100005][4];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<string>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>val[i];
    }
    string a="",b="";
    dp[0][0]=dp[0][1]=0;
    for(i=1;i<=n;i++)
    {
        string re=val[i];
        reverse(re.begin(),re.end());
        dp[i][0]=dp[i][1]=1000000000000000000;
        if(a<=val[i])
        {
            dp[i][0]=min(dp[i][0],dp[i-1][0]);
        }
        if(b<=val[i])
        {
            dp[i][0]=min(dp[i][0],dp[i-1][1]);
        }
        if(a<=re)
        {
            dp[i][1]=min(dp[i][1],dp[i-1][0]+aarray[i]);
        }
        if(b<=re)
        {
            dp[i][1]=min(dp[i][1],dp[i-1][1]+aarray[i]);
        }
        a=val[i],b=re;
    }
    ans=min(dp[n][0],dp[n][1]);
    if(ans==1000000000000000000)
    {
        ans=-1;
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

