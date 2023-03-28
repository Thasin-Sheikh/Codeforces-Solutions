///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
int ar[100005];
int main()
{
    makefast__
    string ptr,str,uni;
    ll candy=0,move=0,m,n,eat=0,l,t,i,j,barry[100000+10],f,a,b,array[100000+10],ans=0,x,y,t2;
    cin>>n>>x>>y;
    for(i=1; i<=n; i++)
    {
        cin>>ar[i];
    }
  for(i=1;i<=n;i++)
  {
      x=1;
      for(j=i-1;j>=i-x&&j>0;j--)
      {
          if(ar[j]<=ar[i])
          {
              x=0;
              break;
          }
      }
       for(j=i+1;j<=i+y&&j<=n;j++)
      {
          if(ar[j]<=ar[i])
          {
              x=0;
              break;
          }
      }
      if(x)
      {
          cout<<i<<endl;
          return 0;
      }

  }

}
