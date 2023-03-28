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
    dl n,i,j,p,m,after,x,y,sum=0,b[100000],s,l;
    set<pair<ll,ll>>cv;
    char ch[101][101];
    set<ll>sc;
    cin>>n;
    l=n;
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/l);
        l--;
    }
    cout<<setprecision(15)<<sum<<endl;

}
