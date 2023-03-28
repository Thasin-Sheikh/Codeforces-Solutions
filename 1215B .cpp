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
ll dp[200000+10][5];
ll solve(ll ind,ll k)
{
    if(ind==1)
    {
        if(k==0)
        {
            if(aarray[ind]>0)
                return dp[ind][k]=1;
            else return dp[ind][k]=0;
        }
        else
        {
            if(aarray[ind]<0)
                return dp[ind][k]=1;
            else return dp[ind][k]=0;
        }

    }
    ll ans=0;
    if(dp[ind][k]!=-1)
        return dp[ind][k];
    if(k==0)
    {
        if(aarray[ind]>0)
        {
            dp[ind][k]=1+solve(ind-1,0);
        }
        else
        {
            dp[ind][k]=solve(ind-1,1);
        }
    }
    else
    {
        if(aarray[ind]>0)
        {
            dp[ind][k]=solve(ind-1,1);
        }
        else
            dp[ind][k]=1+solve(ind-1,0);
    }
    return dp[ind][k];
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    solve(n,0);
    ll pos=0,neg=0;
    for(i=1; i<=n; i++)
    {
        pos+=solve(i,0);
    }
    neg=(n*(n+1))/2-pos;
    cout<<neg<<" "<<pos<<endl;

    return 0;
}

