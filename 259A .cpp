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
ll aarray[100000+10];
ll magic[501][501];
ll ar[200000+10];
int main()
{
    makefast__
    string ptr,str;
    int m1,m2,m3,m4,i,j,n,k,m5,m,ta,t,flag,ans=0;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi;
    bool primes[1000007];
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    set<ll>sl;
    char chess[10][10];
    for(i=1; i<=8; i++)
    {
        for(j=1; j<=8; j++)
        {
            cin>>chess[i][j];
        }
    }
  for(i=1;i<=8;i++)
  {
      for(j=1;j<8;j++)
      {
          if(chess[i][j]==chess[i][j+1])
          {
              cout<<"NO"<<endl;
              //cout<<i<<" "<<j<<endl;
              return 0;
          }
      }
  }
  cout<<"YES"<<endl;


}
