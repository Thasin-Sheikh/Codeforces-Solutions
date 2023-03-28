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
ll mp[70];
map<pair<ll,ll>,ll>pp;
//priority_queue<ll>pq;// from max to min

void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    cin>>n;
    pp.clear();
    for(i=0;i<=70;i++)
    {
        mp[i]=0;
    }
    a=(str[0]-'0');
    a*=10;
    a+=(str[1]-'0');
    b=(str[3]-'0');
    b*=10;
    b+=(str[4]-'0');
    c=a;
    d=b;
    ans=0;
    while(pp[{c,d}]==0)
    {
       ll x,y;
        x=d;
        y=0;
        ll cc=0;
        while(x)
        {

            y*=10;
            y+=x%10;
            x/=10;
            cc++;

        }
        //cout<<c<<" "<<d<<" "<<x<<" "<<y<<" "<<ans<<"\n";

       if(cc==1)
       {
           y*=10;
       }
        if(y==c)
        {
            //cout<<cc<<" ";
            //cout<<y<<" "<<c<<"\n";
            mp[y]++;
        }
       // cout<<c<<" "<<d<<"\n";
       pp[{c,d}]++;
        ll e=n/60;
        ll f=n%60;
        c+=e;
        d+=f;
        if(d>=60)
        {
            c++;
            d=d-60;
        }
        if(c>=24)
        {
            c=c-24;
            sum++;

        }
    }
    for(i=0;i<=70;i++)
    {
        if(mp[i])
        {
            ans++;
        }
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

