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
ll f[3][N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>l>>r;
    ll tot;
    tot=(r-l)+1;
    q=tot/3;
    f[0][1]=f[1][1]=f[2][1]=q;
    if(tot%3==1)
    {
        k=l%3;
        f[k][1]++;
    }
    else if(tot%3==2)
    {
        k=l%3;
        if(k==0){
        f[0][1]++;
        f[1][1]++;
        }
        if(k==1)
        {
            f[1][1]++;
            f[2][1]++;
        }
        if(k==2)
        {
            f[2][1]++;
            f[0][1]++;
        }
    }
    //cout<<f[0][1]<<" "<<f[1][1]<<" "<<f[1][2]<<"\n";
    for(i=2;i<=n;i++)
    {
        f[0][i]=((f[0][i-1]%MOD)*(f[0][1]%MOD))%MOD+((f[1][i-1]%MOD)*(f[2][1]%MOD))%MOD+((f[2][i-1]%MOD)*(f[1][1]%MOD))%MOD;
        f[0][i]%=MOD;
        f[1][i]=((f[1][i-1]%MOD)*(f[0][1]%MOD))%MOD+((f[2][i-1]%MOD)*(f[2][1]%MOD))%MOD+((f[0][i-1]%MOD)*(f[1][1]%MOD))%MOD;
        f[1][i]%=MOD;
        f[2][i]=((f[0][i-1]%MOD)*(f[2][1]%MOD))%MOD+((f[2][i-1]%MOD)*(f[0][1]%MOD))%MOD+((f[1][i-1]%MOD)*(f[1][1]%MOD))%MOD;
        f[2][i]%=MOD;
    }
    cout<<f[0][n]<<"\n";
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
