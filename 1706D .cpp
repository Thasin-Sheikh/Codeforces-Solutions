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
typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
ll aarray[3005];
//ll magic[R][R];
//vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
//int dx[] = {-1 , 0 , 1 , 0};
//int dy[] = {0 , 1 , 0 , -1};
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
//ll vis[N];
//map<ll,ll>mp;
ll n,k;
ll bs(ll m)
{
    ll f=0;
    for(ll a1=0;a1<=aarray[1];a1++)
    {
        ll c=0,j;
        ll f=0;
        for(j=1; j<=n; j++)
        {
            ll f2=0;
            for(ll p=1;p<=min(k,aarray[j]+1);p++){
                ll a=aarray[j]/p;
                if(a1<=a&&a<=(m+a1))
                {
                    f2++;

                }
            }
            if(f2)
            {
                f++;
            }

        }
        if(f==n)
        {
            //cout<<it<<" "<<m<<"\n";
            return true;
        }
    }
    return false;
}
void solve()
{
    ll i,j,m,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        ma=max(ma,l);
        aarray[i]=l;
    }
    if(ma<=k)
    {
        cout<<0<<"\n";
        return;
    }

    l=0,r=ma;
    ans=0;
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
    //add and subtract
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }


}
