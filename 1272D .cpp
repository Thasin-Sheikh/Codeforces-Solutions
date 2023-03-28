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
ll dp[N],n;
ll pre[N],suf[N];
void solve()
{
    ll i,j,k,m,l,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=n+5;i++)
    {
        dp[i]=-1;
    }
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        pre[i]=suf[i]=1;
    }
    sum=1;
    for(i=2;i<=n;i++)
    {
        if(aarray[i]>aarray[i-1])
        {
            pre[i]=pre[i-1]+1;
        }
        sum=max(sum,pre[i]);
    }
    for(i=n-1;i>=1;i--)
    {
        if(aarray[i]<aarray[i+1])
        {
            suf[i]=suf[i+1]+1;
        }
        sum=max(sum,suf[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        if(aarray[i]<aarray[i+2])
        {
            k=pre[i]+suf[i+2];
            sum=max(sum,k);
        }
    }
    cout<<sum<<"\n";
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
