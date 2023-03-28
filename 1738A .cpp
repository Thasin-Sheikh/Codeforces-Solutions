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
ll tp[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v1,v2;
    cin>>n;
    ll s1=0,s2=0;
    ll c1=0,c2=0;
    for(i=1;i<=n;i++)
    {
        cin>>tp[i];
    }
    sum=maxval;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        sum=min(sum,aarray[i]);
        if(tp[i]==1)
        s1+=aarray[i],c1++,v1.push_back(aarray[i]);
        else s2+=aarray[i],c2++,v2.push_back(aarray[i]);
    }
    sort(v1.rbegin(),v1.rend());
    sort(v2.rbegin(),v2.rend());
    if(c1==c2)
    {
        ans=2*s1+s2*2-sum;
    }
    else if(c1>c2)
    {
        d=c1-c2;
        ll ex=0;
        while(d--)
        {
            ex+=v1.back();
            v1.pop_back();
        }
        s1=s1-ex;
        s1=2*s1;
        s1+=ex;
        ans=s1+2*s2;
    }
    else
    {
        d=c2-c1;
        ll ex=0;
        while(d--)
        {
            ex+=v2.back();
            v2.pop_back();
        }
        s2=s2-ex;
        s2=2*s2;
        s2+=ex;
        ans=s2+2*s1;
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



