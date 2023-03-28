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

map<ll,vector<ll>>od,evn;
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
ll psum[N],pxr[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    ll x=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        psum[i]=psum[i-1]+aarray[i];
        x^=aarray[i];
        if(i%2)
        {
            od[x].push_back(i);
        }
        else evn[x].push_back(i);
        pxr[i]=x;
    }
    while(k--)
    {
        cin>>l>>r;
        if((psum[r]-psum[l-1])==0)
        {
            cout<<0<<"\n";
            continue;
        }
        c=r-l+1;
        if(c%2)
        {
            if(pxr[r]==pxr[l-1])
            {
                cout<<1<<"\n";
                continue;
            }
            else
            {
                cout<<-1<<"\n";
            }
            continue;
        }
        else
        {
            if(c==2)
            {
                cout<<-1<<"\n";
                continue;
            }
            else
            {
                if(pxr[l-1]!=pxr[r])
                {
                    cout<<-1<<"\n";
                    continue;
                }
                else
                {
                    if(l%2)
                    {
                        if(od[pxr[r]].size())
                        {
                            p=lower_bound(od[pxr[r]].begin(),od[pxr[r]].end(),l)-od[pxr[r]].begin();
                            if(p!=od[pxr[r]].size()&&od[pxr[r]][p]<=r)
                            {
                                if(aarray[l]==0||aarray[r]==0)
                                    cout<<1<<"\n";
                                else
                                    cout<<2<<"\n";
                                continue;

                            }
                            else cout<<-1<<"\n";
                        }
                        else cout<<-1<<"\n";
                    }
                    else
                    {

                        if(evn[pxr[r]].size())
                        {
                            p=lower_bound(evn[pxr[r]].begin(),evn[pxr[r]].end(),l)-evn[pxr[r]].begin();
                            if(p!=evn[pxr[r]].size()&&evn[pxr[r]][p]<=r)
                            {
                                if(aarray[l]==0||aarray[r]==0)
                                    cout<<1<<"\n";
                                else
                                    cout<<2<<"\n";
                                continue;

                            }
                            else cout<<-1<<"\n";

                        }
                        else cout<<-1<<"\n";
                    }
                }
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




