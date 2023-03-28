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
map<ll,ll>mp;
vector<ll>v[N];
ll pw(ll a,ll b)
{
    ll pro=1;
    while(b)
    {
        if(b%2)
        {
            b--;
            pro*=a;
            pro%=MOD;
        }
        else
        {
            b/=2;
            a*=a;
            a%=MOD;
        }
    }
    return pro;
}
ll to;
void dfs(ll n)
{
    vis[n]=1;
    to++;
    for(ll i=0;i<v[n].size();i++)
    {
        if(vis[v[n][i]]==0)
        {
            dfs(v[n][i]);
        }
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    ll a,b,c;
    for(i=1;i<=n-1;i++)
    {
        cin>>a>>b>>c;
        if(c==0)
        {
            v[a].push_back(b);
            v[b].push_back(a);
        }
    }
    ans=pw(n,m);
    //cout<<ans<<endl;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            to=0;
            dfs(i);
            //cout<<to<<endl;
            ans-=(pw(to,m));
            ans+=MOD;
            ans%=MOD;
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
