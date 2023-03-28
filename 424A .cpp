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
int main()
{
    makefast__
    string ptr,str,uni;
    ll n,i,j,p,m,after,a,mark,bose=0,daray=0,ans=0,array[10000],guest;
    vector<ll>cv;
    set<ll>sc;
    cin>>n;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='x')
            bose++;
        if(str[i]=='X')
            daray++;
    }
    if(bose==daray)
    {
        cout<<0<<endl;
        cout<<str<<endl;
        return 0;
    }
    if(daray>n/2)
    {
        ll f=daray-(n/2);
        p=f;
        while(f)
        {

            for(i=0; i<str.length(); i++)
            {
                if(str[i]=='X')
                {
                    str[i]='x';
                    f--;
                    break;
                }
            }
        }
        cout<<p<<endl;
        cout<<str<<endl;
    }
    else
    {
        ll f=bose-(n/2);
        p=f;
        while(f)
        {

            for(i=0; i<str.length(); i++)
            {
                if(str[i]=='x')
                {
                    str[i]='X';
                    f--;
                    break;
                }
            }
        }
        cout<<p<<endl;
        cout<<str<<endl;
    }

}


