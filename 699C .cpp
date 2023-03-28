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
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    ll zero=0,one=0,two=0,three=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    ll dp[200][3];
    for(i=1;i<=n;i++)
    {
        dp[i][0]=dp[i][1]=dp[i][2]=INT_MAX;
    }
    dp[1][0]=1;
    if(aarray[1]==1||aarray[1]==3)
    {
        dp[1][1]=0;
    }
    if(aarray[1]==2||aarray[1]==3)
    {
        dp[1][2]=0;
    }
    for(i=2; i<=n; i++)
    {

        dp[i][0]=1+min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]));
        if(aarray[i]==1||aarray[i]==3)
        {
            dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
        }
        if(aarray[i]==2||aarray[i]==3)
        {
            dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
        }
    }
    cout<<(min(dp[n][0],min(dp[n][1],dp[n][2])))<<endl;
    //cout<<ans<<endl;
}
