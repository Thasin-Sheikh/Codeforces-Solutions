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
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long maxn=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
vector<ll>v[N];
ll flag=false;
ll ans[N];
vector<ll>parina[4];
void dfs(ll node)
{
    ll i,j,k,l,r;
    vis[node]=1;
    for(i=0;i<v[node].size();i++)
    {
        k=v[node][i];
        if(vis[k])
        {
            if(ans[k]==ans[node])
            {
                flag=true;
            }
            continue;
        }
        if(ans[node]==1)
        ans[k]=2;
        else
            ans[k]=1;
        dfs(k);
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            ans[i]=1;
            dfs(i);
        }
    }
    if(flag)
    {
        cout<<-1<<"\n";
        return ;
    }
    parina[1].clear();
    parina[2].clear();
    for(i=1;i<=n;i++)
    {
        parina[ans[i]].push_back(i);
    }
    cout<<parina[1].size()<<"\n";
    for(auto it:parina[1])
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    cout<<parina[2].size()<<"\n";
    for(auto it:parina[2])
    {
        cout<<it<<" ";
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

