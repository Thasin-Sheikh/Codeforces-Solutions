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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
vector<ll>v[N];
ll dis[N];
ll m;
ll ldis[N];
ll mdis[N];
void dfs(ll chi,ll par,ll len)
{
    dis[chi]=len;
    ll i,j;
    for(i=0;i<v[chi].size();i++)
    {
        ll p=v[chi][i];
        if(p!=par)
        {
            dfs(p,chi,len+1);
        }
    }

}
void dfs2(ll chi,ll par,ll len)
{
    mdis[chi]=len;
    ll i,j;
    for(i=0;i<v[chi].size();i++)
    {
        ll p=v[chi][i];
        if(p!=par)
        {
            dfs2(p,chi,len+1);
        }
    }
}
void solve()
{
    ll i,j,k,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    for(i=1;i<=n-1;i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    dfs(1,1,0);
    dfs2(m,m,0);
    ans=0;
    for(i=2;i<=n;i++)
    {
        if(dis[i]>mdis[i])
        {
            //cout<<i<<" "<<dis[i]<<" "<<mdis[i]<<endl;
            ans=max(ans,dis[i]);
        }

    }
    ans*=2;
    cout<<ans<<"\n";
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



}
