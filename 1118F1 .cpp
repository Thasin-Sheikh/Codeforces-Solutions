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
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,pair<ll,ll>>mp;
vector<ll>v[N];
ll red=0,blue=0;
pair<ll,ll> dfs(ll p)
{
    vis[p]=1;
    ll r=0,b=0;
    if(aarray[p]==1)
        r=1;
    else if(aarray[p]==2)b=1;
    mp[p]= {r,b};
    for(ll i=0; i<v[p].size(); i++)
    {
        ll val=v[p][i];
        if(vis[val]==0)
        {
            pair<ll,ll>x=dfs(val);
            r+=x.first;
            b+=x.second;
            mp[p]= {r,b};
        }
    }
    return {r,b};
}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        if(aarray[i]==1)
        {
            red++;
        }
        else if(aarray[i]==2)
        {
            blue++;
        }
    }
    for(i=1; i<=n-1; i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    dfs(1);
    ans=0;
    for(i=1; i<=n; i++)
    {
        ll a=mp[i].first;
       ll b=mp[i].second;
        if(a==0&&b)
        {
            if(b==blue)
            {
                ans++;
            }
        }
        if(b==0&&a)
        {
            if(a==red)
            {
                ans++;
            }
        }
    }
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
    return 0;
}
