#include<bits/stdc++.h>
using namespace std;
int main()
{

    double a[100],j,n;
    int i;
    double ans,sum=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum<<endl;
    ans=sum/n;
    cout<<std::setprecision(14)<<ans<<endl;
    return 0;
}

