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
ll magic[5][100010];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
ll calc[3][N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>m;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=m;j++)
        {
            calc[i][j]=0;
        }
    }
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>magic[i][j];
            calc[i][j]=calc[i][j-1]+magic[i][j];
        }
    }
    if(m==1)
    {
        cout<<0<<"\n";
        return ;
    }
    ans=INT_MAX;
    for(i=1;i<=m;i++)
    {
        l=max(calc[2][i-1],calc[1][m]-calc[1][i]);
        ans=min(ans,l);
    }
    cout<<ans<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

