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
char magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[100][100];
map<ll,ll>mp;
ll n,m;
ll valid(ll r,ll c)
{
    if(r<1||r>n||c<1||c>m)
    {
        return false;
    }
    if(vis[r][c]>0)
    {
        return false;
    }
    return true;
}
ll cur=0;
void dfs(ll r,ll c,ll val)
{
    vis[r][c]=val;
    cur++;
    for(int i=0; i<4; i++)
    {
        if(valid(r+dx[i],c+dy[i]))
        {
            dfs(r+dx[i],c+dy[i],val);
        }
    }
}
void solve()
{
    ll i,j,k,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>v;
    cin>>n>>m>>k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
            if(magic[i][j]=='*')
            {
                vis[i][j]=1;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i][1]==0)
        {
            dfs(i,1LL,2LL);
        }
        if(vis[i][m]==0)
        {
            dfs(i,m,2LL);
        }
    }
    for(i=1;i<=m;i++)
    {
        if(vis[1][i]==0)
        {
            dfs(1LL,i,2LL);
        }
        if(vis[n][i]==0)
        {
            dfs(n,i,2LL);
        }
    }
    ll now=3;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(vis[i][j]==0)
            {
                cur=0;
                dfs(i,j,now);
                v.push_back({cur,now});
                now++;
            }
        }
    }
    sort(v.begin(),v.end());
    for(i=0; i<v.size()-k; i++)
    {
        ll x=v[i].second;
        sum+=v[i].first;
        //cout<<i<<" "<<x<<endl;
        for(j=1; j<=n; j++)
        {
            for(p=1; p<=m; p++)
            {
                if(vis[j][p]==x)
                {
                    vis[j][p]=1;
                }
            }
        }
    }
    cout<<sum<<"\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(vis[i][j]==1)
            {
                cout<<'*';
            }
            else
                cout<<'.';
        }
        cout<<"\n";
    }
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
