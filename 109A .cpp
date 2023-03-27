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
ll magic[501][501];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b=0,u=0,l=0,B,n,a=0,s=0,r=0,i,j;
    vector<ll>vp;
    set<char>sc;
    cin>>n;
  for(i=0;i<=n;i++)
  {
      B=n-i*4;
      if(B>=0&&B%7==0)
      {
          for(j=0;j<i;j++)
            cout<<4;
          for(j=0;j<B/7;j++)
            cout<<7;
          return 0;
      }
  }
    cout<<-1;
  cout<<endl;

}

