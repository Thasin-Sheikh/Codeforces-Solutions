#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c=0,time,d,m,n,p=2,t,k=INT_MIN,array[200000+10],q,sum1=0,cnt=0,sum=0,ans=-1,an=INT_MIN,f,l,flag;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<pair<long long int,long long int>>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>str>>ptr;
    k=ptr.length()-1;
  for(i=str.length()-1;i>=0;i--)
  {
      if(str[i]==ptr[k])
      {
          cnt++;
          k--;
      }
      else break;
  }
  ans=str.length()+ptr.length()-2*cnt;
  cout<<ans<<endl;


}
