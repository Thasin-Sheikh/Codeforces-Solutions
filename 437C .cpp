///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
vector<ll>v[10000];
ll vis[100000];
ll dfs(ll n)
{
    ll cost=aarray[n],i;
    vis[n]=-1;
    ll cur=0;
    for(i=0; i<v[n].size(); i++)
    {
        if(vis[v[n][i]]==0)
        {
            ll co=min(cost,aarray[v[n][i]]);
            cur+=co;
        }
    }
    return cur;

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=m; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    ll ans=0;
    for(i=1; i<=n; i++)
    {
        ans+=dfs(i);
    }
    cout<<ans<<endl;
    return 0;
}

