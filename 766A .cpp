///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
#include<regex>
#include<math.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
int main()
{
    makefast__
    string ptr,str,uni;
    ll n,i,j,p,m,after,a[100000],t,k,mark,c=0,bose,daray,ans=INT_MIN,sum=0,b[100000],s;
    set<pair<ll,ll>>cv;
    char ch[101][101];
    set<ll>sc;
    cin>>str>>ptr;
    if(str==ptr)
    {
        cout<<-1<<endl;
        return 0;
    }
    else if(str.length()>ptr.length())
    {
        cout<<str.length()<<endl;
    }
    else cout<<ptr.length()<<endl;

}
