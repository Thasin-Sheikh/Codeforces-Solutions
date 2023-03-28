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
    ll b,u,l,B,n,a,s,r,i,j,m,k,ans=INT_MIN,c,t,g,sum=0,array[100000+10];
    vector<ll>vp;
    set<char>sc;
    char ch;
     cin>>a>>b>>c>>n;
     if(c>a||c>b||c>n)
     {
         cout<<-1<<endl;
         return 0;
     }
     u=a-c;
     m=b-c;
     B=u+m+c;
     if(B>=n)
     {
         cout<<-1<<endl;
     }
     else cout<<n-B<<endl;


}
