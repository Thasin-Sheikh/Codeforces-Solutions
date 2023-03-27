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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
//int dx[] = {-1 , 0 , 1 , 0};
//int dy[] = {0 , 1 , 0 , -1};
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
ll  allp[10000005];

void sieve()
{
    allp[1] = 1;
    for (ll i=2; i<10000001; i++)
    {
        allp[i] = i;
    }


    for (ll i=4; i<10000001; i+=2)
    {
        allp[i] = 2;
    }

    for (ll i=3; i*i<10000001; i++)
    {

        if (allp[i] == i)
        {

            for (ll j=i*i; j<10000001; j+=i)
            {

                if (allp[j]==j)
                {
                    allp[j] = i;
                }
            }
        }
    }
}
vector<ll> getFactorization(ll x)
{
    vector<ll> ret;
    while (x != 1)
    {
        ret.push_back(allp[x]);
        x = x / allp[x];
    }
    return ret;
}

void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>a>>b;
    ll g=__gcd(a,b);
    if(g!=1)
    {
        cout<<0<<"\n";
        return ;
    }
    d=abs(b-a);
    if(d==1)
    {
        cout<<-1<<"\n";
        return ;
    }
    if(a%2&&b%2)
    {
        cout<<1<<"\n";
        return ;
    }
    ans=maxval;
    vector<ll>pp=getFactorization(d);
    for(i=0;i<pp.size();i++)
    {
        c=a/pp[i];
        if(a%pp[i])
        {
            c++;
        }
        c=c*pp[i];
        ans=min(ans,c-a);
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
    sieve();
    while(t--)
    {
        solve();
    }

    return 0;
}




