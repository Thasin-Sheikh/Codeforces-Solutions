#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,ar[100000],i,j,flag=0,cnt=0,a,b,ans;
    string str,ptr;
    vector<long long int>vec;
    char ch;
    cin>>n>>a>>b;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
   for(i=n-1;i>=0;i--)
   {
       vec.push_back(ar[i]);
       cnt++;
       if(cnt==a)
       {
           ans=ar[i]-ar[i-1];
           break;
       }
   }
   if(n==2&&a==2||a==0)
    cout<<0<<endl;
   else
  cout<<ans<<endl;




    return 0;
}
