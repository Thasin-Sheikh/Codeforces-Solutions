///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
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
void solve()
{
    ll n,k,i,j;
    vector<ll>v;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        ll dc=k-(aarray[i]%k);
        if(dc)
            v.push_back(dc);
    }
    sort(v.begin(),v.end());
    map<ll,ll>vis;
    ll ans=0;
    for(i=0; i<v.size(); i++)
    {
        if(vis[v[i]%k])
            vis[v[i]%k]+=k;
        else
            vis[v[i]%k]=v[i]%k;
        ans=max(ans,vis[v[i]%k]);
    }
    if(ans)
        ans++;
    cout<<ans<<endl;

}
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

