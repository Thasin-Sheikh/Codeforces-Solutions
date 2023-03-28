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
vector<pair<ll,ll>>v[105];
ll vis[110];
ll a,b,c;
ll dfs(ll val,ll col)
{
    if(val==b)
    {
        return true;
    }
    vis[val]=1;
    for(ll i=0;i<v[val].size();i++)
    {
        pair<ll,ll>p=v[val][i];
        if(p.second==col&&vis[p.first]==0)
        {
            if(dfs(p.first,col))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    ll q;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>a>>b;
        ll ans=0;
        for(j=1;j<=100;j++)
        {
            memset(vis,0,sizeof(vis));
            if(dfs(a,j))
                ans++;
        }
        cout<<ans<<endl;

    }

    return 0;
}


