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
    ll n,i,j,p,m,after,a,t,k,mark,c=0,bose,daray,ans=INT_MIN,sum=0,b,s;
    vector<pair<ll,ll>>cv;
    char ch[101][101];
    set<ll>sc;
    cin>>n>>m;
    if(m%n!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    k=m/n;
    while(k%2==0)
    {
        k=k/2;
        c++;
    }
    while(k%3==0)
    {
        k=k/3;
        c++;
    }
    if(k!=1)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<c<<endl;



}
