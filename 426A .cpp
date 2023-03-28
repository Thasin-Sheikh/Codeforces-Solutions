#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,array[100000+10],i,sum=0;
    long long int lfirst ,sec,third,mfirst,p,p2;
    string str,ptr;
    vector<long long int>low,high;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
  sort(array,array+n);
  for(i=0;i<n-1;i++)
  {
      sum=sum+array[i];
  }
  if(sum>m)
    cout<<"NO"<<endl;
  else cout<<"YES"<<endl;

}
