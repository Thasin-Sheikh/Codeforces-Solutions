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
    ll candy=0,move=0,m,n,i,j,sum1,sum,a,b,r,s=0,rs,array[200001];
    vector<ll>vp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        vp.push_back(a);
    }
   m=max_element(vp.begin(),vp.end())-vp.begin();
  // cout<<m<<endl;
   for(i=0;i<m;i++)
   {
       if(vp[i]>vp[i+1])
       {
           //cout<<vp[i]<<endl;
           cout<<"NO"<<endl;
           return 0;
       }
   }
   for(i=m;i<n-1;i++)
   {
       if(vp[i]<vp[i+1])
       {
           cout<<"NO"<<endl;
           return 0;
       }
   }
cout<<"YES"<<endl;


}
