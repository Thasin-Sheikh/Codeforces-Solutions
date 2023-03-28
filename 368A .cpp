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
    ll r1=INT_MAX,r2=INT_MAX,c2,c1,d1,d2;
    set<ll>sl;
    ll a,b,c,d;
    cin>>n>>d;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    sort(aarray,aarray+n+1);
    cin>>m;
    ll sum;
    sum=0;
    c2=min(m,n);
    for(i=1; i<=c2; i++)
    {
        sum+=aarray[i];

    }
    c1=m-c2;
    if(c1>0)
    {
        sum=sum-(c1*d);
    }
    cout<<sum<<endl;


}
