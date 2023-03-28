///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
ll dp[100002][6];
ll n;
ll solve(ll i,ll k,ll l)
{
    if(i>n||k==0||i<1)
    {
        return 0;
    }
    if(dp[i][l]!=-1)
        return dp[i][l];
    ll val=0;
    if(i<=n)
    {
        val=max(val,aarray[i]+solve(i+1,k-1,l));

    }
    if(i>=1&&l>0)
    {
        val=max(val,aarray[i]+solve(i-1,k-1,l-1));
    }
    return dp[i][l]=val;

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,m,k,t,l;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>l;
        memset(dp,-1,sizeof(dp));
        for(i=1;i<=n;i++)
        {
            cin>>aarray[i];
        }
        ll ans=solve(2,k,l)+aarray[1];
        cout<<ans<<endl;
    }

    return 0;
}

