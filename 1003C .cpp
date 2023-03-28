#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ara[10000];
    int i,j,n,k;
    double ans=-1e18;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(i=0; i<n; i++)
    {
        int cnt=0,sum=0;
        for(j=i; j<n; j++)
        {
            cnt++;
            sum=sum+ara[j];
            if(cnt>=k)
            {
                double avg=(sum*1.0)/cnt;
                ans=max(ans,avg);
            }
        }
    }

    printf("%0.15f",ans);
    return 0;
}

