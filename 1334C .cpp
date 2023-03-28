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
typedef pair<ll,ll>pr;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
ll a[600000+100],b[600000+100];
ll cost[600000+100];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll mi=10000000000000,ind=-1;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        a[n+i]=a[i];
        b[n+i]=b[i];
    }
    for(i=1;i<=2*n;i++)
    {
        if(i==1)
        {
            cost[i]=a[i];
        }
        else
        {
            cost[i]=max(0LL,a[i]-b[i-1]);
        }
    }
    for(i=1;i<=2*n;i++)
    {
        cost[i]+=cost[i-1];
    }
    ans=(1LL<<60);
    for(i=1;i<=n;i++)
    {
        ans=min(ans,a[i]+cost[i+n-1]-cost[i]);

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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


