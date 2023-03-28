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
ll node,edge;
void dfs(ll ve)
{
    vis[ve]=1;
    node++;
    edge+=v[ve].size();
    for(ll i=0; i<v[ve].size(); i++)
    {
        if(vis[v[ve][i]]==0)
        {
            dfs(v[ve][i]);
        }
    }
}
void solve()
{
    ll i,j,k,m,n,l,a,b,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            node=0,edge=0;
            dfs(i);
            //cout<<i<<" "<<node<<" "<<edge<<endl;
            if(edge!=((node*(node-1))))
            {
                cout<<"NO"<<"\n";
                return ;
            }
        }
    }
    cout<<"YES"<<"\n";
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
