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
ll ccount[2000000+1];
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,n,k,m5,m,ta,t,flag,ans=INT_MAX;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    set<ll>sc;
    bool primes[1000007];
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    ll hour,minute;
    char ch;
    set<ll>sl;
    ll a,b,c,d;
    cin>>hour;
    cin>>ch;
    cin>>minute;
    minute++;
    if(minute==60)
    {
        hour++;
        minute=0;
        if(hour==24)
            hour=0;
    }

    while(hour/10!=minute%10||hour%10!=minute/10)
    {
        minute++;
        if(minute==60)
        {
            hour++;
            minute=0;
        }
        if(hour==24)
        {
            hour=0;
        }
    }
    if(hour<9)
        cout<<0<<hour<<":";
    else
        cout<<hour<<":";
    if(minute<9)
    {
        cout<<0<<minute<<endl;
    }
    else cout<<minute<<endl;

}
