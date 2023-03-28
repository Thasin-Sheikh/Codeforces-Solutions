#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i=0,j,cnt=0,t,ans,flag=1,x,d,sum=0,dif,dp[100][100],f,p=1,c=1;
    char pixel [110][110];
    cin>>n>>m;

    if(m!=10)
    {
        for(i=1; i<=n; i++)
        {
            cout<<m;
        }
    }
    else
    {
        if(n==1)
            cout<<-1<<endl;
        else
        {
            cout<<1;
            for(i=0; i<n-1; i++)
            {
                cout<<0;
            }
        }
        printf("\n");
    }
}
