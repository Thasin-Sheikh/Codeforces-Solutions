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
set<ll>sc,ans;
int main()
{
    makefast__
    string ptr,str,uni;
    ll n,i,j,p,m,after,a,b,c,t,k,f,acopy[100000+10],sum=0,ans=0,array[100000+10];
    vector<pair<ll,ll>>cv;
    ll count[1001];
    vector<string>sv;
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    char ch1;
    list<ll>lc;
    cin>>str>>ptr;
    ll x1,x2,y1,y2;
    x1=str[0],x2=ptr[0];
    y1=str[1],y2=ptr[1];
    while(x1<x2&&y1<y2)
    {
        sv.push_back("RU");
        x1++;
        y1++;

    }
    while(x1<x2&&y1>y2)
    {
        sv.push_back("RD");
        x1++;
        y1--;
    }
     while(x1>x2&&y1<y2)
    {
        sv.push_back("LU");
        x1--;
        y1++;
    }
     while(x1>x2&&y1>y2)
    {
        sv.push_back("LD");
        x1--;
        y1--;
    }
    while(x1<x2)
    {
        sv.push_back("R");
        x1++;
    }
    while(x1>x2)
    {
        sv.push_back("L");
        x2++;
    }
    while(y1>y2)
    {
        sv.push_back("D");
        y2++;
    }
    while(y1<y2)
    {
        sv.push_back("U");
        y1++;
    }
  cout<<sv.size()<<endl;
  for(i=0;i<sv.size();i++)
    cout<<sv[i]<<endl;

}
