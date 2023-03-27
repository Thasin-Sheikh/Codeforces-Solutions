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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
vector<ll>v[N];
ll dp[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=2;i<=100000;i++)
    {
        if(v[i].size()==0)
        {
            for(j=i;j<=100000;j+=i)
            {
                v[j].push_back(i);
            }
        }
    }
    ans=0;
    for(i=1;i<=n;i++)
    {
        ll mx=0;
        for(j=0;j<v[aarray[i]].size();j++)
        {
            mx=max(mx,dp[v[aarray[i]][j]]);
        }
        mx++;
        ans=max(ans,mx);
        for(j=0;j<v[aarray[i]].size();j++)
        {
            dp[v[aarray[i]][j]]=mx;
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


