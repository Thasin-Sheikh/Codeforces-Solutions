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
ll asum[N],bsum[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,c,d,mi=maxval,ma=minval,a,b,e;
    string str;
    bool yes=true;
    vector<ll>v,v2;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        v.push_back(l);
    }
    for(i=1;i<=m;i++)
    {
        cin>>l;
        v2.push_back(l);
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    asum[0]=v[0];
    bsum[0]=v2[0];
    for(i=1;i<v.size();i++)
    {
        asum[i]+=asum[i-1]+v[i];
    }
    for(i=1;i<v2.size();i++)
    {
        bsum[i]+=bsum[i-1]+v2[i];
    }
    ans=maxval;
    for(i=0;i<v.size();i++)
    {
        a=lower_bound(v.begin(),v.end(),v[i])-v.begin();
        b=upper_bound(v2.begin(),v2.end(),v[i])-v2.begin();
        sum=(a+1)*v[i]-asum[a];
        c=0;
        if(b==0)
        {
            c=bsum[m-1]-m*v[i];
        }
        else if(b!=v2.size())
        {
            c=bsum[m-1]-bsum[b-1]-(m-b)*v[i];
        }
        sum+=c;
        ans=min(ans,sum);
    }
    for(i=0;i<v2.size();i++)
    {
        a=upper_bound(v.begin(),v.end(),v2[i])-v.begin();
        b=lower_bound(v2.begin(),v2.end(),v2[i])-v2.begin();
        sum=0;
        if(a==v.size())
        {
            sum+=(n*v2[i])-asum[n-1];
        }
        else if(a!=0&&a!=v.size())
        {
            sum+=(a)*v2[i]-asum[a-1];
        }
        c=bsum[m-1];
        if(b!=0)
        c-=bsum[b-1];
        d=m-b;
        d*=v2[i];
        c-=d;
        sum+=c;
       // cout<<v2[i]<<" "<<sum<<"\n";
        ans=min(ans,sum);
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

