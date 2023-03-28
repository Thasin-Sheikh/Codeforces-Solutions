#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,cnt,ans=0,d=0,flag=0,j=0,money,days,a,ar[100000+100],p[100000];
    vector<long long int >vec;
    string s,s1;
    cin>>n;
    cin>>s>>s1;
    for(i=0,j=0;i<s.length(),j<s1.length();i++,j++)
    {
      long long int x,y;
      x=s[i];
      y=s1[i];
      ans=ans+min(abs(x-y),min(1+y+9-x,1+x+9-y));
      //cout<<ans<<endl;


    }
    cout<<ans<<endl;


}
