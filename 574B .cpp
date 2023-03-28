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
map<pair<ll,ll>,ll>mp;
vector<ll>v[N];
ll ans=INT_MAX;
void dfs(ll va)
{
    if(v[va].size()<2)
    {
        return;
    }
    for(ll i=0; i<v[va].size(); i++)
    {
        ll nw=v[va][i];
        if(nw==va)
        {
            continue;
        }
        for(ll j=0; j<v[nw].size(); j++)
        {
            ll aa=v[nw][j];
            if(aa==nw||aa==va)
                continue;
            if(mp[ {va,aa}])
            {
                ll h=v[aa].size()+v[nw].size()+v[va].size();
                h-=6;
                ans=min(ans,h);
            }
        }
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
        mp[ {l,r}]++;
        mp[ {r,l}]++;
    }
    for(i=1; i<=n; i++)
    {
        dfs(i);
    }
    if(ans==INT_MAX)
    {
        cout<<-1<<"\n";
    }
    else cout<<ans<<"\n";
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

