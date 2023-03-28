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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
vector<ll>v,v1;
ll dp[5015][5015];
ll dpp(ll i,ll j)
{
    if(i>=v.size())
    {
        return 0;
    }
    if(j>=v1.size())
    {
        return INT_MAX;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    ll res=dpp(i+1,j+1)+(abs(v[i]-v1[j]));
    ll res1=dpp(i,j+1);
    return dp[i][j]=min(res1,res);
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    set<ll>s;
    cin>>n;
    for(i=0;i<5005;i++)
    {
        for(j=0;j<5005;j++)
        {
            dp[i][j]=-1;
        }
    }
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        if(aarray[i])
        {
            v.push_back(i);
        }
        else
        {
            v1.push_back(i);
        }
    }
    if(v1.size()==n)
    {
        cout<<0<<"\n";
        return ;
    }
    cout<<dpp(0LL,0LL)<<"\n";
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
