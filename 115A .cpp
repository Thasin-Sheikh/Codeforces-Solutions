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
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
vector<ll>v[10000+10];
ll vis[10000+10];
ll ans=0;
void dfs(ll n,ll c)
{
    ll i,j,k;
    c++;
    vis[n]=1;
    ans=max(ans,c);
    for(i=0;i<v[n].size();i++)
    {
        if(vis[v[n][i]]==0)
        {
            dfs(v[n][i],c);
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        ll c=1;
        k=aarray[i];
        while(k!=-1&&k<=n)
        {
            c++;
            k=aarray[k];
        }
        ans=max(ans,c);
    }
cout<<ans<<endl;
    return 0;
}


