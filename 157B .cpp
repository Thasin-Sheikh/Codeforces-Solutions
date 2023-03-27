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
ll ans[200000+10];
ll ar[200000+10];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a,c,d,e,f,i,j,k,g;
    dl sumblue=0,sumred=0;
    vector<ll>vp;
    set<ll>sc;
    char ch;
    cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>aarray[i];
   }
   sort(aarray,aarray+n);
   sumred+=aarray[0]*aarray[0]*3.1415926536;
   for(i=1;i<n;i+=2)
   {
       sumred+=(aarray[i+1]*aarray[i+1]*3.1415926536)-(aarray[i]*aarray[i]*3.1415926536);
   }
   cout<<setprecision(15)<<abs(sumred)<<endl;

}
