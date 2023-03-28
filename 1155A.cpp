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
    ll b,u,l,B,n,a,s=0,r,i,j,m,ans,sum,test,f,ar[10000],count[10000];
    vector<ll>vp;
    set<char>sc;
    char ch;
    set<ll>sl;
    cin>>n;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]<str[i-1])
        {
            s=1;
            break;
        }
    }
    if(!s)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0;i<str.length()-1;i++)
    {
        if(str[i]>str[i+1])
        {
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            return 0;
        }
    }


}

