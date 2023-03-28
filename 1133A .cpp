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
    ll s1,s2,s3,ans,h1,m1,h2,m2;
    char ch1,ch2;
    list<ll>lc;
    cin>>h1;
    cin>>ch1;
    cin>>m1;
    cin>>h2;
    cin>>ch2;
    cin>>m2;
    s1=m2-m1;
    s3=(h2-h1)*60;
    s3=s3+s1;
    ans=s3/2;
    //cout<<ans<<endl;
    if(ans>=60)
    {
        h1=h1+(ans/60);
        m1=m1+(ans%60);
        if(m1>=60)
        {
            h1++;
            m1=m1%60;
        }
    }
    else
    {
        m1=m1+ans;
        if(m1>=60)
        {
            h1++;
            m1=m1%60;
        }
    }
    if(h1<10)
    {
        cout<<0<<h1<<":";
    }
    else
        cout<<h1<<":";
    if(m1<10)
        cout<<0<<m1<<endl;
    else
        cout<<m1<<endl;

}
