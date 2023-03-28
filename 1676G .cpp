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
const long long  maxval=1e18;
const long long minval=-1e18;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[4005];
vector<ll>ed[4005];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
ll col[4005][2];
string str;
void dfs(ll par,ll nd)
{
    //vis[nd]=1;
   // cout<<nd<<endl;
    for(ll i=0; i<ed[nd].size(); i++)
    {
        ll k=ed[nd][i];
      //  cout<<nd<<" "<<k<<endl;
        if(k!=par)
        {
            dfs(nd,k);
            if(str[k-1]=='W')
            {
                col[k][0]++;
            }
            else
            {
                col[k][1]++;
            }
            //cout<<nd<<" "<<col[nd][0]<<" "<<col[nd][1]<<"\n";
            col[nd][0]+=col[k][0];
            col[nd][1]+=col[k][1];
        }
    }

}

void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        vis[i]=0;
        col[i][0]=col[i][1]=0;
        ed[i].clear();
    }
   // cin>>p;
    for(i=2; i<=n; i++)
    {
        cin>>l;
        ed[i].push_back(l);
        ed[l].push_back(i);
    }
    cin>>str;
    if(str[0]=='W')
    {
        col[1][0]++;
    }
    else
    {
        col[1][1]++;
    }
    dfs(-1,1);
    ans=0;
    for(i=1;i<=n;i++)
    {
        if(col[i][0]==col[i][1])
        {
           // cout<<i<<" "<<col[i][0]<<" "<<col[i][1]<<"\n";
            ans++;
        }
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

