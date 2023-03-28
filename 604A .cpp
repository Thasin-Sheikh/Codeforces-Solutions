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
set<char>sc;
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,m1,m2,m3,m4,m5,ta,ans=0,fa,tb,fb,sum,tower,floor,q,left[100000+10],right[100000+10];
    ll w1,w2,w3,w4,w5;
    ll shack,unhack;
    dl f1,f2,f3,f4,f5;
    dl u2,u3,u4,u5;
    cin>>m1>>m2>>m3>>m4>>m5;
    cin>>w1>>w2>>w3>>w4>>w5;
    cin>>shack>>unhack;
    dl u=0.3*500;
    dl f11=(1-(m1/250.0))*500-(50*w1);
    f1=max(u,f11);
    u2=0.3*1000;
    dl f22=(1-(m2/250.0))*1000-(50*w2);
    f2=max(u2,f22);
    u3=0.3*1500;
    dl f33=(1-(m3/250.0))*1500-(50*w3);
    f3=max(u3,f33);
    u4=0.3*2000;
    dl f44=(1-(m4/250.0))*2000-(50*w4);
    f4=max(u4,f44);
    u5=0.3*2500;
    dl f55=(1-(m5/250.0))*2500-(50*w5);
    f5=max(u5,f55);
    ans=f1+f2+f3+f4+f5;
    ans+=(shack*100)-(unhack*50);
    cout<<ans<<endl;




}
