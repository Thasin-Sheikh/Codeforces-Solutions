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
bool prime[1000001];
map<ll,ll>mp;
ll a[100000+10],b[100000+10];
vector<ll>v[100000+10];
ll mn;
ll dfs(ll n)
{
    mn=min(mn,aarray[n]);
    ll i,j,k;
    mp[n]=0;
    for(i=0; i<v[n].size(); i++)
    {
        k=v[n][i];
        if(mp[k]!=0)
        {
            dfs(k);
        }
    }
    return mn;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp[i]=1;
    }
    for(i=1; i<=m; i++)
    {
        cin>>a[i]>>b[i];
        v[a[i]].push_back(b[i]);
        v[b[i]].push_back(a[i]);
    }
    ll value,ans=0;
    for(i=1; i<=m; i++)
    {
        if(mp[a[i]])
        {
            mn=aarray[a[i]];
            value=dfs(a[i]);
            //cout<<value<<endl;
            ans+=value;
        }
    }
    //cout<<ans<<endl;
    for(i=1; i<=n; i++)
    {
        if(mp[i])
            ans+=aarray[i];
    }
    cout<<ans<<endl;

    return 0;
}


