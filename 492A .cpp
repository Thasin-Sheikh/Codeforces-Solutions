#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i=0,j,cnt=0,t,ans,flag=1,x,d,sum=0,dif,dp[100][100],f,p=1,c=1;
    cin>>n;
    while(n>0)
    {
        cnt++;
        c=(cnt*(cnt+1))/2;
        if(c>n)
            break;
        else
        {
            n=n-c;
            i++;
        }

    }
    cout<<i<<endl;



}
