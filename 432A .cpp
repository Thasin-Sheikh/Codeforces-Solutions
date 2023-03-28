#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,array[100000+10],a,b,cnt=0,cnt1=0,cnt2=0,k;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a+k<=5)
            cnt++;
    }
  cout<<(cnt/3)<<endl;

return 0;

}
