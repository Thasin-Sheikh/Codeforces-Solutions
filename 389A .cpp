
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
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a,s,r,i,j,ans=INT_MAX,sum=0,test,f,arr[100000];
    vector<ll>vp;
    set<char>sc;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    s=arr[0];
  for(i=1;i<n;i++)
  {
      s=__gcd(arr[i],s);
  }
  cout<<s*n<<endl;



}
