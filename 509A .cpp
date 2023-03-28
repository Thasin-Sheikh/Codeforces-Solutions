#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,cnt,t,ans,a,flag=1,x,d,sum=0,dif,dp[100][100];
    string s;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1||j==1)
                dp[i][j]=1;
            else
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
    }

    cout<<dp[n][n]<<endl;


}
