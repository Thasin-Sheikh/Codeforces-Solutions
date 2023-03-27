#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0,h[101],g[101];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>h[i]>>g[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(h[i]==g[j])
                cnt++;
            if(h[j]==g[i])
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
