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
    ll n,i,j,p,m,after,x,y,sum=0,b[100000],s;
    set<pair<ll,ll>>cv;
    char ch[101][101];
    set<ll>sc;
    cin>>n;
    if(n%2!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    ll pro=1;
    for(i=1;i<=n/2;i++)
    {
        pro=pro*2;
    }
    cout<<pro<<endl;

}
