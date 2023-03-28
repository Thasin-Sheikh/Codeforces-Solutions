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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
vector<ll>v[1000];
ll ans=1;
ll vis[10000];
ll dfs(ll n)
{
    vis[n]=0;
    ll i,j;
    for(j=0;j<v[n].size();j++)
    {
        ll num=v[n][j];
        if(vis[num])
        {
            ans*=2;
            dfs(num);
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis,1,sizeof(vis));
    for(i=1;i<=n;i++)
    {
        if(vis[i])
        {
            dfs(i);
        }
    }
    cout<<ans<<endl;


    return 0;
}


