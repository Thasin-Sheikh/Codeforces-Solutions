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
/*ll  seg[400000+10];
void build(ll node,ll st,ll en)
{
    if(st==en)
    {
        seg[node]=aarray[st];
        return ;
    }
    ll mid=(st+en)/2;
    ll lft=node*2;
    ll rght=node*2+1;
    build(lft,st,mid);
    build(rght,mid+1,en);
    seg[node]=min(seg[lft],seg[rght]);
    return ;
}
ll query(ll node,ll st,ll en,ll l,ll r)
{
    if(st>=l&&en<=r)
    {
        return seg[node];
    }
    if(r<st||l>en)
    {
        return INT_MAX;
    }
    ll mid=(st+en)/2;
    ll lft=2*node;
    ll rght=2*node+1;
    ll ret=query(lft,st,mid,l,r);
    ll ret1=query(rght,mid+1,en,l,r);
    return min(ret,ret1);

}*/
ll st[N][25],n,st2[N][25];
ll bs(ll m)
{
    ll i,f=0;
    for(i=1; i+m-1<=n; i++)
    {
        ll a=m;
        ll b=log2(a);
        ll c=min(aarray[st[i][b]],aarray[st[i+m-(1LL<<b)][b]]);
        ll d=__gcd(st2[i][b],st2[i+m-(1LL<<b)][b]);
        //cout<<i<<" "<<m<<" "<<c<<" "<<d<<"\n";
        if(c==d)
        {

            ed[m].push_back(i);
            f++;
        }
    }
    if(f)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,k,m,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=n; i++)
    {
        st[i][0]=i;
        st2[i][0]=aarray[i];

    }
    for(j=1; (1LL<<j)<=n; j++)
    {
        for(i=1; (i+(1LL<<j)-1)<=n; i++)
        {
            if(aarray[st[i][j-1]]<aarray[st[i+(1LL<<(j-1))][j-1]])
            {
                st[i][j]=st[i][j-1];
            }
            else
            {
                st[i][j]=st[(i+(1LL<<(j-1)))][j-1];
            }
        }
    }
    for(j=1; (1LL<<j)<=n; j++)
    {
        for(i=1; (i+(1LL<<j)-1)<=n; i++)
        {

            st2[i][j]=__gcd(st2[i][j-1],st2[i+(1LL<<(j-1))][j-1]);
        }
    }


    ans=0;
    l=1,r=n;
    while(l<=r)
    {
        m=(l+r)/2;
        if(bs(m))
        {
            ans=m;
            l=m+1;
        }
        else r=m-1;
    }
    //cout<<ans<<"\n";
    cout<<ed[ans].size()<<" "<<ans-1<<"\n";
    for(i=0; i<ed[ans].size(); i++)
    {
        cout<<ed[ans][i]<<" ";
    }
    cout<<"\n";
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




