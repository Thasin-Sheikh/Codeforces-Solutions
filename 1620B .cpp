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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
ll hori1[N],hori2[N],ver1[N],ver2[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,e;
    string str;
    bool yes=true;
    vector<ll>v;
    ll w,h,k1,k2,k3,k4;
    cin>>w>>h;
    cin>>k1;
    ans=0;
    for(i=1;i<=k1;i++)
    {
        cin>>hori1[i];
    }
    ans=max(ans,(hori1[k1]-hori1[1])*h);
    cin>>k2;
    for(i=1;i<=k2;i++)
    {
        cin>>hori2[i];
    }
    ans=max(ans,(hori2[k2]-hori2[1])*h);
    cin>>k3;
    for(i=1;i<=k3;i++)
    {
        cin>>ver1[i];
    }
    ans=max(ans,(ver1[k3]-ver1[1])*w);
    cin>>k4;
    for(i=1;i<=k4;i++)
    {
        cin>>ver2[i];
    }
    ans=max(ans,(ver2[k4]-ver2[1])*w);
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

