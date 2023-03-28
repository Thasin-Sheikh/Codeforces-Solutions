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
    int m1,m2,m3,m4,i,j,n,k,m5,m,ta,t,flag,ans=0;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi;
    bool primes[1000007];
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    set<ll>sl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    ll x;
    x=1;
    for(i=1; i<=n; i++)
    {
        w1=abs(i-x);
        w2=abs(i-1);
        w3=abs(1-x);
        w4=w1+w2+w3;
        ans+=aarray[i]*w4;

    }
    ll a1,a2,a3,a4;
    //cout<<ans<<endl;
    for(i=1;i<=n;i++)
    {
        a1=abs(x-1);
        a2=abs(i-1);
        a3=abs(i-x);
        a4=a1+a2+a3;
        ans+=a4*aarray[i];
    }
    cout<<ans<<endl;



}
