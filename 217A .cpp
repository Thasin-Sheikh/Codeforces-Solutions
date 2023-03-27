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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll x[1001],y[1001],n;
void  dfs(ll p)
{
    vis[p]=1;
    for(ll i=1;i<=n;i++)
    {
        if((x[i]==x[p]||y[i]==y[p])&&vis[i]==0)
        {
            dfs(i);
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,a,b,m,k,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            ans++;
            dfs(i);
        }
    }
    cout<<ans-1<<endl;
    return 0;
}




