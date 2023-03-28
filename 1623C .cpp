///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
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
vector<ll>v,vcopy;
ll bs(ll vl)
{
    ll i,j;
    vcopy=v;
    ll n=v.size()-1;
    for(i=n;i>=2;i--)
    {
        ll k=vcopy[i];
        if(k<vl)
        {
            return false;
        }
        k-=vl;
        k=min(k,v[i]);
        k/=3;
        vcopy[i-1]+=k;
        vcopy[i-2]+=2*k;
        vcopy[i]-=3*k;
    }
    for(i=0;i<vcopy.size();i++)
    {
        if(vcopy[i]<vl)
        {
            return false;
        }
    }
    return true;

}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    cin>>n;
    v.clear();
    for(i=1;i<=n;i++)
    {
        cin>>l;
        v.push_back(l);
    }
    l=0,r=INT_MAX;
    ans=0;
   while(l<=r)
    {
        m=(l+r)/2;
        if(bs(m))
        {
            l=m+1;
            ans=m;
        }
        else r=m-1;
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

