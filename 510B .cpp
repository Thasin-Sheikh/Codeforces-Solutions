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
ll vis[N];
map<pair<ll,ll>,ll>mp;
string str[100];
ll n,m;
bool a=true;
void dfs(ll r,ll c,ll curr,ll curc,ll cur)
{
    if(curc+1<=m&&curr==r&&curc+1==c&&cur>=3)
    {
        a=true;
        return ;
    }
    if(curc-1>=1&&curr==r&&curc-1==c&&cur>=3)
    {
        a=true;
        return;
    }
    mp[ {curr,curc}]++;
    if(curc+1<=m&&mp[ {curr,curc+1}]==0&&magic[curr][curc+1]==magic[r][c])
    {
        dfs(r,c,curr,curc+1,cur+1);
    }
    if(curc-1>=1&&mp[ {curr,curc-1}]==0&&magic[curr][curc-1]==magic[r][c])
    {
        dfs(r,c,curr,curc-1,cur+1);
    }
    if(curr+1<=n&&mp[ {curr+1,curc}]==0&&magic[curr+1][curc]==magic[r][c])
    {
        dfs(r,c,curr+1,curc,cur+1);
    }
    if(curr-1>=1&&mp[ {curr-1,curc}]==0&&magic[curr-1][curc]==magic[r][c])
    {
        dfs(r,c,curr-1,curc,cur+1);
    }
}
void solve()
{
    ll i,j,k,l,r,q,p,ans,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<str[i].size(); j++)
        {
            magic[i][j+1]=str[i][j];
        }
    }
    ll f=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {

            a=false;
            mp.clear();
            if(i+1<=n&&mp[ {i+1,j}]==0&&magic[i+1][j]==magic[i][j])
            {
                mp[ {i,j}]++;
                mp[ {i+1,j}]++;
                dfs(i,j,i+1,j,2LL);
            }
            if(a==true)
            {
                cout<<"Yes"<<"\n";
                return ;
            }

        }
    }
    cout<<"No"<<"\n";
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
