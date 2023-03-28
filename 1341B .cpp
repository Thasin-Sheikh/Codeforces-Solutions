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
ll dp[200000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=1; i<=n; i++)
        {
            cin>>aarray[i];
        }
        dp[0]=dp[1]=0;
        for(i=2;i<=n;i++)
        {
            if(aarray[i]>aarray[i-1]&&aarray[i]>aarray[i+1])
            {
                dp[i]=dp[i-1]+1;
            }
            else dp[i]=dp[i-1];
        }
        ll Max=INT_MIN,againMax=INT_MIN;
        aarray[0]=INT_MAX;
        for(i=1;i<=n-k+1;i++)
        {
            ll dif=dp[i+k-1]-dp[i];
            //cout<<dif<<" ";
            if(aarray[i+k-1]>aarray[i+k]&&aarray[i+k-1]>aarray[i+k-2])
            {
                dif--;
            }
            if(aarray[i]>aarray[i-1]&&aarray[i]>aarray[i+1])
            {
                dif--;
            }
            //cout<<dif<<endl;
            Max=max(Max,dif);
            //cout<<dp[i]<<" ";
        }
        for(i=1;i<=n-k+1;i++)
        {
            ll dif=dp[i+k-1]-dp[i];
            //cout<<dif<<" ";
            if(aarray[i+k-1]>aarray[i+k]&&aarray[i+k-1]>aarray[i+k-2])
            {
                dif--;
            }
            if(aarray[i]>aarray[i-1]&&aarray[i]>aarray[i+1])
            {
                dif--;
            }
            //cout<<dif<<endl;
           if(dif==Max)
           {
               cout<<Max+1<<" "<<i<<endl;
               break;
           }
            //cout<<dp[i]<<" ";
        }

    }
    return 0;
}


