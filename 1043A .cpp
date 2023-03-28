#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,array[100000+10],a,b,i,cnt=0,j,p,k=0,sum=0,ans;
    vector<pair<long long int,long long int>>vp;
    long long int count[100000];
    memset(count,0,sizeof(count));
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        sum=sum+array[i];
    }
    sort(array,array+n);
    b=array[n-1];
    for(i=b;; i++)
    {
        if((i*n-sum)>sum)
        {
            ans=i;
            break;
        }
    }
  cout<<ans<<endl;

}
