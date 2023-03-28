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
ll  seg[400000+10];
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
    seg[node]=(seg[lft]&seg[rght]);
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
        return -1;
    }
    ll mid=(st+en)/2;
    ll lft=2*node;
    ll rght=2*node+1;
    ll ret=query(lft,st,mid,l,r);
    ll ret1=query(rght,mid+1,en,l,r);
    return (ret&ret1);

}
ll l[N],r[N],q[N];
ll pre[N][30];
void solve()
{
    ll i,j,k,m,n,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>l[i]>>r[i]>>q[i];
       // cout<<q[i]<<"\n";
        for(j=0;j<30;j++)
        {
            if((q[i]&(1LL<<j)))
            {

                pre[l[i]][j]++;
                pre[r[i]+1][j]--;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<30;j++)
        {
            pre[i][j]+=pre[i-1][j];
            //cout<<i<<" "<<j<<" "<<pre[i][j]<<"\n";
        }
    }
    for(i=1;i<=n;i++)
    {
        ll cur=0;
        for(j=0;j<30;j++)
        {
            if(pre[i][j])
            {
                cur+=(1LL<<j);

            }
        }
        //cout<<i<<" "<<cur<<"\n";
        aarray[i]=cur;
    }
    build(1LL,1LL,n);
    for(i=1;i<=m;i++)
    {
        a=query(1LL,1LL,n,l[i],r[i]);
       // cout<<a<<"\n";
        if(a!=q[i])
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    cout<<"YES"<<"\n";
    for(i=1;i<=n;i++)
    {
        cout<<aarray[i]<<" ";
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



