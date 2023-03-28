///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using myset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
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
vector<ll>ed[N];
map<ll,ll>mp;
ll a[1001],b[1001];
ll n;
vector<pair<ll,ll>>v;

void solve()
{
    ll i,j,m,l,r,k,q,p,ans,sum=0,d;
    string str;
    bool yes=true;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        sum+=mp[a[i]];

    }
    d=0;
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
        d+=b[i];
    }
    if(k>=sum)
    {
        cout<<d<<"\n";
        return ;
    }
    ll dp[n+2][k+2];
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=k; j++)
        {
            dp[i][j]=0;
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<=k; j++)
        {
            if(mp[a[i]]<=j)
            {
                //cout<<i<<" "<<mp[a[i]]<<endl;
                dp[i][j]=max(dp[i-1][j],b[i]+dp[i-1][j-mp[a[i]]]);

            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }

        }
    }
    ans=dp[n][k];
    cout<<ans<<"\n";

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
    //never use pow func directly
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    mp[1]=0;
    for(i=2; i<=1000; i++)
    {
        mp[i]=INT_MAX;
    }
    for(i=1; i<=1000; i++)
    {
        for(j=i; j>=1; j--)
        {
            k=i+i/j;
            if(k>1000)
                break;
            mp[k]=min(mp[k],mp[i]+1);
        }
    }
    while(t--)
    {
        solve();
    }

    return 0;
}
