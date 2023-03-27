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
    ll m1,m2,m3,m4,i,j,n,k,m5,m,ta,t,flag,ans=0;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi;
    set<ll>sc;
    bool primes[1000007];
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    ll r1,r2,c2,c1,d1,d2;
    set<ll>sl;
    cin>>r1>>r2;
    cin>>c1>>c2;
    cin>>d1>>d2;
    ll a,b,c,d;
    a=(r1+c1-d2)/2;
    b=r1-a;
    c=c1-a;
    d=d1-a;
    sc.insert(a);
    sc.insert(b);
    sc.insert(c);
    sc.insert(d);
    if(a+b!=r1||c+d!=r2||a+c!=c1||b+d!=c2||a+d!=d1||b+c!=d2)
    {
        cout<<-1<<endl;
    }
    else if(sc.size()<4)
        cout<<-1<<endl;
    else if(a>9||a<=0||b<=0||b>9||b<=0||c<=0||c>9||d<=0||d>9)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<a<<" "<<b<<endl;
        cout<<c<<" "<<d<<endl;
    }

}
