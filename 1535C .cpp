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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    n=str.size();
    ll dp[n+5][2];
    for(i=0; i<=n; i++)
    {
        dp[i][0]=dp[i][1]=0;
    }
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            if(str[i]=='1')
            {
                dp[i][1]=1;
                dp[i][0]=0;
            }
            else if(str[i]=='0')
            {
                dp[i][1]=0;
                dp[i][0]=1;
            }
            else
            {
                dp[i][1]=1;
                dp[i][0]=1;

            }
            continue;

        }
        if(str[i]=='1')
        {
            dp[i][1]=dp[i-1][0]+1;
            dp[i][0]=dp[i][0];
        }
        else if(str[i]=='0')
        {
            dp[i][0]=dp[i-1][1]+1;
            dp[i][1]=dp[i][1];
        }
        else
        {
            dp[i][1]=dp[i-1][0]+1;
            dp[i][0]=dp[i-1][1]+1;
        }
    }
    ll cur=1,cur1=1;
    a=0,b=0;
    for(i=0; i<n; i++)
    {
        cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
    }
    for(i=n-1; i>=0; i--)
    {

            a+=(dp[i][0]*(dp[i][0]+1))/2;


            b+=(dp[i][1]*(dp[i][1]+1))/2;

    }
    ans=max(a,b);
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
    while(t--)
    {
        solve();
    }

    return 0;
}

