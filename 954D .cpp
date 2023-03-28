///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
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
const long MAXN=5e5+10;
int aarray[N];
int magic[R][R];
vector<ll>primes;
bool check[1000001];
int large[10000005];
ll vis[N];
map<pair<ll,ll>,ll>mp;
ll n,m,s,e;
vector<ll>v[N];
ll dis[N];
ll dise[N];
void bfs(ll vx,ll *ar)
{
    for(ll i=1; i<=n; i++)
    {
        ar[i]=INT_MAX;

    }
    ar[vx]=0;
    queue<ll>q;
    q.push(vx);
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        for(int u:v[x])
        {
            if(ar[u]==INT_MAX)
            {
                ar[u]=ar[x]+1;
                q.push(u);
            }

        }
    }
}
void solve()
{
    ll i,j,k,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m>>s>>e;
    ans=0;
    for(i=1; i<=m; i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    bfs(s,dis);
    bfs(e,dise);
    //cout<<dis[e]<<" "<<dise[s]<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(dis[i]+dise[j]+1>=dis[e]&&dis[j]+dise[i]+1>=dis[e])
            {
                //cout<<i<<" "<<j<<endl;
                ans++;
            }
        }
    }
    cout<<ans-m<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
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


