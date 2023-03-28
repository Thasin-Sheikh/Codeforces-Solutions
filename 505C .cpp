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
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
ll dp[30005][2*250+5];
ll cnt[30005];
ll d;
ll find_ans(ll curland,ll len)
{
    ll p=len-(d-250);
    //cout<<p<<endl;
     if(curland>30000)
    {
        return 0;

    }
    if(dp[curland][p]!=-1)
    {
        return dp[curland][p];
    }
    ll ans;
    if (len == 1) {
        ans = cnt[curland] + max(find_ans(curland+len, len), find_ans(curland+len+1, len+1));
    } else {
        ans = cnt[curland] + max(max(find_ans(curland+len-1, len-1), find_ans(curland+len, len)), find_ans(curland+len+1, len+1));
    }
    return dp[curland][p] = ans;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0,a,b,c;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>d;
    memset(dp,-1,sizeof(dp));
    for(i=1;i<=n;i++)
    {
        cin>>a;
        cnt[a]++;
    }
    ans=find_ans(d,d);
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

