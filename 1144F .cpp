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
vector<pair<ll,ll>>vp;
ll color[N];
bool ok=true;
void dfs(ll p,ll c)
{
    color[p]=c;
    ll i;
    for(i=0;i<v[p].size();i++)
    {
        ll k=v[p][i];
        if(color[k]==-1)
        {
            dfs(k,c^1);
        }
        else
        {
            if(color[p]==color[k])
            {
                ok=false;
            }
        }
    }

}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
        vp.push_back({l,r});
    }
    for(i=1;i<=n;i++)
    {
        color[i]=-1;
    }
    dfs(1LL,0LL);
    if(!ok)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    cout<<"YES"<<"\n";
    for(i=0;i<m;i++)
    {
        if(color[vp[i].first]>color[vp[i].second])
        {
            cout<<1;
        }
        else cout<<0;
    }
    cout<<"\n";
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
