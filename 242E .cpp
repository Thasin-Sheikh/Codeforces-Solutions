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
ll  seg[400000+10][25];
void build(ll node,ll st,ll en)
{
    if(st==en)
    {

        for(ll i=0; i<=20; i++)
        {
            if((1LL<<i)&aarray[st])
            {
                seg[node][i]=1;
            }
            else
                seg[node][i]=0;
            //cout<<node<<" "<<i<<" "<<seg[node][i]<<"\n";

        }
        return ;
    }
    ll mid=(st+en)/2;
    ll lft=node*2;
    ll rght=node*2+1;
    build(lft,st,mid);
    build(rght,mid+1,en);
    for(ll i=0; i<=20; i++)
    {
        seg[node][i]+=seg[lft][i]+seg[rght][i];
    }
    return ;
}
ll query(ll node,ll pos,ll st,ll en,ll l,ll r)
{
    //ll sm=0;
    if(st>=l&&en<=r)
    {
        return seg[node][pos];
    }
    if(en<l||st>r)
    {
        return 0;
    }
    ll mid=(st+en)/2;
    ll lft=2*node;
    ll rght=2*node+1;
    ll ret=query(lft,pos,st,mid,l,r);
    ll ret1=query(rght,pos,mid+1,en,l,r);
    return ret+ret1;

}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    build(1LL,1LL,n);
    cin>>q;
    ll tp,x;
    while(q--)
    {
        cin>>tp;
        if(tp==1)
        {
            cin>>l>>r;
            sum=0;
            for(i=0; i<=20; i++)
            {
                a=query(1LL,i,1LL,n,l,r);
                // cout<<i<<" "<<a<<"\n";
                sum+=(1LL<<i)*a;
            }
            // a=query(1LL,2LL,1LL,n,l,r);
            //cout<<a<<"\n";
            cout<<sum<<"\n";
        }
        else
        {
            cin>>l>>r>>x;
            for(i=0; i<=20; i++)
            {
                //if((1LL<<i)&x){
                //update(1LL,1LL,n,l,r);}
            }
        }
    }
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




