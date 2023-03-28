#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,a[10000],b[10000];
    int i,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    //cout<<a[n-1]<<endl;
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);
    //cout<<b[m-1]<<endl;
    cout<<a[n-1]<<" "<<b[m-1]<<endl;
    return 0;
}
