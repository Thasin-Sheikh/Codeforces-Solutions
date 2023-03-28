#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,sum=0,ans=0,a[100000],b[100000],c[100000],z,sum1=0,sum2=0;
    char ch;
    string str;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum1=sum1+a[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>b[i];
        sum2=sum2+b[i];
    }
    if(sum2>sum1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;

    return 0;

}


