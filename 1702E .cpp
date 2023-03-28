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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
ll acnt[N];
bool yes=true;
ll ndc=1;
void  dfs(ll par,ll nd)
{
    vis[nd]=1;
    //cout<<nd<<"\n";
    for(int i=0; i<ed[nd].size(); i++)
    {
        ll k=ed[nd][i];
       // cout<<nd<<"\n";
        if(vis[k])
        {
            if(k!=par)
            {
                if(ndc%2)
                yes=false;

            }
            continue;
        }
        ndc++;
        dfs(nd,k);
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,a,b,q,p,ans,sum=0,c,d,mi=maxval,ma=minval;
    string str;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        acnt[i]=0,vis[i]=0;
        ed[i].clear();
    }
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        ed[a].push_back(b);
        ed[b].push_back(a);
        acnt[a]++;
        acnt[b]++;
        if(a==b)
        {
            sum++;
        }
        if(acnt[a]>2)
        {
            sum++;
        }
        if(acnt[b]>2)
        {
            sum++;
        }
    }

    if(sum)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
           // cout<<i<<"\n";
           ndc=1;
            yes=true;
            dfs(i,i);
            if(!yes)
            {
               // cout<<i<<"\n";
                cout<<"NO"<<"\n";
                return ;
            }
        }
    }
    cout<<"YES"<<"\n";
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



