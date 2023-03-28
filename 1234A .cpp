#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],i,j,m,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        int ans=0,sum=0;
        for(j=0;j<m;j++)
        {
            cin>>a[j];
            sum=sum+a[j];
            if(sum%m==0)
            {
            ans=sum/m;
            }
            else
                ans=sum/m+1;

        }
        cout<<ans<<endl;
    }
}
