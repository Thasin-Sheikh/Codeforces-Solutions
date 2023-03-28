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
ll row1[100000+10];
ll row2[100000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    ll dp[100000+10],dp2[100000+10];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>row1[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>row2[i];
    }
    dp[0]=dp2[0]=0;
    dp[1]=row1[1];
    dp2[1]=row2[1];
    for(i=2;i<=n;i++)
    {
        dp[i]=max(dp[i-1],row1[i]+dp2[i-1]);
        dp2[i]=max(dp2[i-1],row2[i]+dp[i-1]);
    }
    cout<<max(dp[n],dp2[n])<<endl;

    return 0;
}


