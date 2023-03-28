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
vector<ll>v[400],ans[400];
void dfs(ll nd,ll col)
{
    ll i,j,k,l;
    vis[nd]=col;
    for(i=0;i<v[nd].size();i++)
    {
        k=v[nd][i];
        if(vis[k]==0)
        {
            dfs(k,col);
        }
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>str;
        for(j=1;j<=n;j++)
        {
            k=str[j-1]-'0';
            if(k)
            {
                v[i].push_back(j);
                v[j].push_back(i);

            }

        }
    }
    ll c=1;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i,c);
            c++;
        }
    }
    for(i=1;i<=n;i++)
    {
        ans[vis[i]].push_back(aarray[i]);
    }
    for(i=1;i<c;i++)
    {
        sort(ans[i].rbegin(),ans[i].rend());
    }
    for(i=1;i<=n;i++)
    {
        aarray[i]=ans[vis[i]].back();
        ans[vis[i]].pop_back();
    }
    for(i=1;i<=n;i++)
    {
        cout<<aarray[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

