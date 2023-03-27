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
    reverse(dvi.begin(),dvi.end());
    for(i=0;i<dvi.size();i++)
        cout<<dvi[i];*/
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
int a[N];
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,x,y,n,k,m5,m,ta,t,flag=0,sum=0,ans=INT_MAX;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    cin>>n;
    cin>>str;
    ll a=0,f=0,in=0;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='A')
            a++;
        if(str[i]=='F')
            f++;
        if(str[i]=='I')
            in++;
    }
    if(in==0)
    {
        cout<<a<<endl;
    }
    else if(in==1)
        cout<<1<<endl;
    else if(in>1)
    {
        cout<<0<<endl;
    }

}
