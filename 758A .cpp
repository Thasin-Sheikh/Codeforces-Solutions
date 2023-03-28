#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ar[100000+100],i,j,n,m,cnt,cnt1,c=0,sum=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ar[i];
    sort(ar,ar+n);
   m=ar[n-1];
   for(i=0;i<n-1;i++)
   {
       sum=sum+(m-ar[i]);
   }
   cout<<sum<<endl;

}
