#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a[100000+10],ans=0;
    int i;
    cin>>n>>m;
    cin>>a[0];
    if(a[0]>1)
        ans=ans+(a[0]-1);
    else
        ans=ans+0;
    for(i=1; i<m; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<m; i++)
    {
        if(a[i]<a[i-1])
        {
            ans=ans+(n-(a[i-1]-a[i]));
        }
        else
            ans=ans+(a[i]-a[i-1]);
    }
    cout<<ans<<endl;
}
