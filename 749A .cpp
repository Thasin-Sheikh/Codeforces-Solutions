#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,cnt,t,ans,a,flag=1,x,d,sum=0,dif,dp[100][100];
    string s;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(i=1; i<=n/2; i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        cout<<(n/2)<<endl;
        for(i=1; i<(n/2); i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }

    cout<<endl;



}
