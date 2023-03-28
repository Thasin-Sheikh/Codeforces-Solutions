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
    ll candy=0,move=0,m,n,i,t,j,sum1,sum,a,b,r,s=0,rs,array[200001],f;
    vector<ll>vp;
    set<char>sc;
    ll count[26];
    cin>>n;
    cin>>str;
    memset(count,0,sizeof(count));
    for(i=0;i<str.length();i++)
    {
        sc.insert(str[i]);
    }
    if(sc.size()==1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
   for(i=0;i<str.length();i++)
   {
       if(str[i]!=str[i+1])
       {
           cout<<str[i]<<str[i+1]<<endl;
           return 0;
       }
   }


}
