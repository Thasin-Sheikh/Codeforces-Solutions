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
    string ptr,str[11]={"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday","monday", "tuesday", "wednesday", "thursday"};
    ll m1,m2,m3,m4,i,j,n,k,m5,m,ta,t,flag,ans=INT_MAX;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    set<ll>sc;
    bool primes[1000007];
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    ll r1,r2,c2,c1,d1,d2;
    set<ll>sl;
    ll a,b,c,d;
    ll chele,meye;
    string frst,scnd;
    cin>>frst>>scnd;
    for(i=0;i<7;i++)
    {
       if(str[i]==frst)
       {
           if(str[i]==scnd||str[i+2]==scnd||str[i+3]==scnd)
           {
               cout<<"YES"<<endl;
               return 0;
           }

       }
    }
    cout<<"NO"<<endl;



}
