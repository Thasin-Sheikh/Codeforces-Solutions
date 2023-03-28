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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll a,b;
    cin>>n>>a>>b;
    ll x[n+1],y[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }
    ans=0;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if((x[i]+x[j]<=a&&max(y[i],y[j])<=b)||(max(x[i],x[j])<=a&&y[i]+y[j]<=b))
            {
                ans=max(ans,x[i]*y[i]+x[j]*y[j]);

            }
            if((x[i]+x[j]<=b&&max(y[i],y[j])<=a)||(max(x[i],x[j])<=b&&y[i]+y[j]<=a))
            {
                ans=max(ans,x[i]*y[i]+x[j]*y[j]);

            }
            if((x[i]+y[j])<=a&&max(y[i],x[j])<=b ||(max(x[i],y[j])<=a&&(y[i]+x[j])<=b))
            {
                ans=max(ans,x[i]*y[i]+x[j]*y[j]);
            }
            if((x[i]+y[j])<=b&&max(y[i],x[j])<=a ||(max(x[i],y[j])<=b&&(y[i]+x[j])<=a))
            {
                ans=max(ans,x[i]*y[i]+x[j]*y[j]);
            }
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


