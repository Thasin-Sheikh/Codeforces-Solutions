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
const long long  maxval=1e18;
const long long minval=-1e18;
ll aarray[N];
char magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
ll n,m,x,y;
ll dp[2000];
ll fun(ll curc,ll mahas,ll madot)
{
    ll i,j,k,has=0,dot=0;
    if(dp[curc]!=-1)
    {
        return dp[curc];
    }
    if(curc>m)
    {
        //  cout<<curc<<endl;
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        if(magic[i][curc]=='#')
        {
            has++;
        }
        else dot++;
    }
    cout<<curc<<" "<<mahas<<" "<<madot<<"\n";
    ll  a=INT_MAX,b=INT_MAX,c=INT_MAX,d=INT_MAX;
    if(mahas<y)
    {
        //cout<<1<<" "<<curc<<" "<<mahas<<" "<<madot<<"\n";
        a=min(a,dot+fun(curc+1,mahas+1,madot));
    }
    if(madot<y)
    {
        //cout<<2<<" "<<curc<<" "<<mahas<<" "<<madot<<"\n";
        b=min(b,has+fun(curc+1,mahas,madot+1));
    }
    if(mahas>=x)
    {
        //cout<<3<<" "<<curc<<" "<<mahas<<" "<<madot<<"\n";
        c=has+fun(curc+1,0LL,madot+1);
    }
    if(madot>=x)
    {
        //cout<<4<<" "<<curc<<" "<<mahas<<" "<<madot<<"\n";
        d=dot+fun(curc+1,mahas+1,madot);
    }
    //cout<<curc<<" "<<mahas<<" "<<madot<<"\n";
    //cout<<curc<<" "<<min({a,b,c,d})<<"\n";
    return dp[curc]=min({a,b,c,d});
}
void solve()
{
    ll i,j,k,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m>>x>>y;
    memset(dp,-1,sizeof(dp));
    for(i=1; i<=n; i++)
    {
        cin>>str;
        for(j=1; j<=m; j++)
        {
            magic[i][j]=str[j-1];
        }
    }
    ans=fun(1LL,0LL,0LL);
   // for(i=1; i<=m; i++)
    ///{
      //  cout<<dp[i]<<" ";
    //}
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
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

