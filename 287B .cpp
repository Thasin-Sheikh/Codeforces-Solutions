///*Bismillahir Rahmanir Rahim***///
///**Author thasin_sheikh**///
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
typedef tree<ll ,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
ll n,k;
ll bs(ll m)
{
    ll a,b,c,d;
    a=(k*(k+1))/2;
    b=k-m;
    b=((b+1)*b)/2;
    a-=b;
    a-=(m-1);
    if(a<n)
    {
        return false;
    }

        return true;


}
void solve()
{
    ll i,j,m,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    if(n==1)
    {
        cout<<0<<"\n";
        return ;
    }
    if(k>=n)
    {
        cout<<1<<"\n";
        return ;
    }
    l=1,r=k-1;
    ans=-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(bs(m))
        {
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
    if(ans==-1)
    {
        cout<<ans<<"\n";
        return ;
    }
    a=(k*(k+1))/2;
    b=k-ans;
    a-=(b*(b+1))/2;
    a-=(ans-1);
    if(a==n)
    {
        cout<<ans<<"\n";
        return ;
    }
    ll rem=a%n;
    c=k-ans+1;
    if(c-rem>=2)
    {
        cout<<ans<<"\n";
    }
    else cout<<-1<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
    //add and subtract

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

