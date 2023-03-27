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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>a>>b;
    ll fact[30];
    fact[0]=1;
    ans=0;
    ll al=0,bl=0;
    c=a;
    d=b;
    while(c)
    {
        c/=10;
        al++;
    }
    while(d)
    {
        d/=10;
        bl++;
    }
    if(al==1&&bl==1)
    {
        cout<<b-a+1<<"\n";
        return ;
    }

    for(j=al+1;j<bl;j++)
    {
        a=j;
        a-=2;
        p=1;
        a=max(0LL,a);
        while(a--)
        {
            p*=10;
        }
        ans+=p;
    }
   //cout<<ans<<"\n";
    str=to_string(a);
    string bs=to_string(b);
    ll s1=str[0]-'0';
    ll e1=str.back()-'0';
    if(e1<=s1)
    {
        a=al;
        a-=2;
        p=1;
        a=max(0LL,a);
        k=9-s1+1;
        while(a--)
        {
            p*=10;
        }
        ans+=p;
    }
    else
    {

        a=al;
        a-=2;
        p=1;
        a=max(0LL,a);
        k=9-s1;
        while(a--)
        {
            p*=k;
        }
        ans+=p;

    }
    //cout<<ans<<"\n";
    ll s2=bs[0]-'0';
    ll e2=bs.back()-'0';
    if(e2>=s2)
    {

        a=bl;
        a-=2;
        p=1;
        a=max(0LL,a);
        k=s2;
        while(a--)
        {
            p*=5;
        }
        ans+=p;
    }
    else
    {

        a=al;
        a-=2;
        p=1;
        a=max(0LL,a);
        k=s2-1;
        while(a--)
        {
            p*=k;
        }
        ans+=p;
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




