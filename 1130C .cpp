///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
char ch[100][100];
ll ans=INT_MAX;
ll r1,r2,c1,c2,n;
ll dp[101][101];
ll dfs(ll r,ll c,ll mr,ll mc,ll mxr,ll mxc)
{
    if(r<1||r>n||c<1||c>n)
        return 0;
    if(dp[r][c]!=-1)
    {
        return 0 ;
    }
    dp[r][c]=0;
    if(r==r2&&c==c2)
    {
        ll k,b;
        k=abs(mxc-mc);
        k=k*k;
        b=abs(mxr-mr);
        b=b*b;
        ans=min(ans,k+b);
        //cout<<ans<<endl;
        return ans ;
    }
    if(ch[r][c]=='1')
    {
        mr=min(mr,r);
        mc=min(mc,c);
        mxr=max(mxr,r);
        mxc=max(mxc,c);
    }
    if(c+1<=n)
        return min(dfs(r,c+1,100,100,0,0));
    if(c-1>=1)
        return min(ans,dfs(r,c-1,100,100,0,0));
    if(r+1<=n)
        return min(ans,dfs(r+1,c,100,100,0,0));
    if(r-1>=1)
        return min(ans,dfs(r-1,c,100,100,0,0));
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,m,k,t;
    cin>>n;
    cin>>r1>>c1;
    cin>>r2>>c2;
    memset(dp,-1,sizeof(dp));
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>ch[i][j];
        }
    }
    cout<<dfs(r1,c1,100,100,0,0)<<endl;

    return 0;
}



