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
ll dp[3005][5];
ll cost[10000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>cost[i];
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<4; j++)
            dp[i][j]=INT_MAX;
    }
    for(i=1; i<=n; i++)
        dp[i][1]=cost[i];
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(aarray[j]>aarray[i])
                dp[j][2]=min(dp[j][2],dp[i][1]+cost[j]);
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(aarray[j]>aarray[i])
            {
                dp[j][3]=min(dp[j][3],dp[i][2]+cost[j]);
            }
        }
    }
    ll ans=INT_MAX;
    for(i=1; i<=n; i++)
    {
        ans=min(ans,dp[i][3]);
    }
    if(ans==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else cout<<ans<<endl;
    return 0;
}

