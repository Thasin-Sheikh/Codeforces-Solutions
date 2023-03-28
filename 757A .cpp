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
ll magic[501][501];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b=0,u=0,l=0,B=0,a=0,s=0,r=0;
    vector<ll>vp;
    set<char>sc;
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='B')
            B++;
        if(str[i]=='u')
            u++;
            if(str[i]=='a')
                a++;
        if(str[i]=='l')
            l++;
        if(str[i]=='b')
            b++;
        if(str[i]=='s')
            s++;
        if(str[i]=='r')
            r++;
    }
    u/=2;
    a/=2;
    ll ans;
    ans=min(a,min(B,min(u,min(l,min(b,min(s,r))))));
    cout<<ans<<endl;

}
