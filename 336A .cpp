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
ll ar[200000+10];
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,n,k,m5,m,ta,t,flag,g,nmpo=INT_MAX,hariken=INT_MAX;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi;
    bool primes[1000007];
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    set<ll>sl;
    ll x,y,x1,y1,x2,y2;
    cin>>x>>y;
    m1=abs(x)+abs(y);
    if(x>0&&y>0)
    {
        x1=0;
        y1=m1;
        x2=m1;
        y2=0;
    }
    if(x<0&&y>0)
    {
        x1=-1*m1;
        y1=0;
        x2=0;
        y2=m1;
    }
    if(x<0&&y<0)
    {
        x1=-1*m1;
        y1=0;
        x2=0;
        y2=-1*m1;
    }
    if(x>0&&y<0)
    {
        x1=0;
        y1=-1*m1;
        x2=m1;
        y2=0;
    }
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;



}
