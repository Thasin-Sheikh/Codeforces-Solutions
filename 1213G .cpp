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
ll ans[N],parent[N],sz[N];
ll findp(ll a)
{
    if(parent[a]==a)
    {
        return a;
    }
    return parent[a]=findp(parent[a]);
}
void merg(ll a,ll b)
{
    ll findpa=findp(a);
    ll findpb=findp(b);
    if(findpb!=findpa)
    {
        parent[findpb]=findpa;
        sz[findpa]+=sz[findpb];
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<pair<ll,pair<ll,ll>>>v;
    cin>>n>>m;
    ll w;
    for(i=1;i<n;i++)
    {
        cin>>a>>b>>w;
        v.push_back({w,{a,b}});
        parent[i]=i;
        sz[i]=1;
    }
    parent[n]=n;
    sz[n]=1;
    sort(v.begin(),v.end());
    vector<ll>qi,iq;
    for(i=1;i<=m;i++)
    {
        cin>>l;
        qi.push_back(l);
        ans[l]=-1;
    }
    iq=qi;
    sort(qi.begin(),qi.end());
    l=0;
    ll pos=0;
    ll curans=0;
    while(l<m)
    {
        if(ans[qi[l]]==-1)
        {
            //cout<<l<<" "<<qi[l]<<"\n";
            //cout<<qi[l]<<"\n";
            if(pos<n-1)
            {
                //cout<<pos<<" "<<l<<" "<<qi[l]<<"\n";
                while(v[pos].first<=qi[l])
                {

                    a=v[pos].second.first;
                    b=v[pos].second.second;

                    //cout<<a<<" "<<sz[a]<<" "<<b<<" "<<sz[b]<<"\n";
                    a=findp(a);
                    b=findp(b);
                    curans-=(sz[a]*(sz[a]-1))/2;
                    curans-=(sz[b]*(sz[b]-1))/2;
                    merg(a,b);
                    b=findp(a);
                    //cout<<a<<" "<<b<<"\n";
                    a=sz[b];
                    curans+=(a*(a-1))/2;
                    pos++;
                    if(pos==n-1)
                    {
                        break;
                    }
                }
                //cout<<qi[l]<<" "<<curans<<"\n";
                ans[qi[l]]=curans;
            }
            else
            {
                ans[qi[l]]=curans;
            }
        }
        l++;
    }
    //return ;
    for(i=0;i<iq.size();i++)
    {
        cout<<ans[iq[i]]<<" ";
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




