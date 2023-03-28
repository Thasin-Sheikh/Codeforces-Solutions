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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;

ll sum=0;
ll n;
ll ma=0;
ll bs(ll val)
{
    ll oache,eache,i;
    if(val%2==0)
    {
        oache=eache=val/2;
    }
    else
    {
        eache=val/2;
        oache=eache+1;
    }
    ll tw1=0,on1=0,tw2=0,on2=0;
    for(i=1; i<=n; i++)
    {
        ll k=ma-aarray[i];
        ll p=k+1;
        if(k%2==0)
        {
            tw1+=k/2;
        }
        else
        {
            on1++;
            tw1+=k/2;
        }
        if(p%2==0)
        {

            tw2+=p/2;
        }
        else
        {
            on2++;
            tw2+=p/2;
        }
    }
    //cout<<on1<<" "<<tw1<<endl;
    ll a=oache,b=eache;
    ll c=min(a,on1);
    a-=c;
    on1-=c;
    b+=a/2;
    ll d=min(b,tw1);
    b-=d;
    tw1-=d;
    if(on1==0&&tw1==0)
    {
        return true;
    }
    c=min(oache,on2);
    oache-=c;
    on2-=c;
    eache+=oache/2;
    d=min(eache,tw2);
    eache-=d;
    tw2-=d;
    if(on2==0&&tw2==0)
    {
        return true;
    }
    return false;

}
void solve()
{
    ll i,j,k,m,l,r,q,p,ans,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    sum=0;
    ma=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        ma=max(aarray[i],ma);
    }
    l=0,r=1e18;
    ans=r;
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
