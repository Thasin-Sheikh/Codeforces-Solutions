///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
ll aarray[100000+10];
char magic[1][100000];
ll ar[200000+10];
const int N = 2e5 + 10;
int main()
{
    makefast__
    string ptr,str;
    int m1,m2,m3,m4,i,j,x=0,y=0,n,k,m5,m,ta,t,flag=0,sum=0,ans=0;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    cin>>n;
    for(i=2;i<=n-1;i++)
    {
        m=n;
        vector<ll>bal;
        ans=0;
        while(m>0)
        {
            k=m%i;
            ans+=k;
            m/=i;
        }
        y+=ans;
    }
    k=__gcd(y,(n-2));
    //cout<<k<<endl;
   cout<<y/k<<'/'<<(n-2)/k<<endl;

}
