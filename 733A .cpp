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
    ll n,i,j,p,m,after,x,y,sum=0,b[100000],s=0,l,ans=INT_MIN,flag=0;
    set<pair<ll,ll>>cv;
    char ch[101][101];
    set<ll>sc;
    cin>>str;
    str+='O';
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y')
        {
            //cout<<flag<<endl;
            flag=abs(flag-(i+1));
            ans=max(ans,flag);
            flag=i+1;
            s=1;
        }
    }
    if(!s)
    {
        cout<<str.length()+1<<endl;

    }
    else
    cout<<ans<<endl;

}
