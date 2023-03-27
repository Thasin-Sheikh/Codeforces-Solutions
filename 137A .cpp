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
    ll n,i,j,p,m,after,a,k,mark,bose=0,daray,ans=0,sum=0,array[100000+10],persuade[100000+10],guest,f,extra=0;
    vector<pair<ll,ll>>cv;
    set<ll>sc;
    ll cnt=0;
    cin>>str;
    char ch=str[0];
    str+='L';
    for(i=0; i<str.length(); i++)
    {
        if(str[i]==ch)
        {
            cnt++;
        }
        else
        {
            ans++;
            ch=str[i];
            cnt=0;
            cnt++;
            //cout<<ans<<endl;
        }
        if(cnt==5)
        {

            ans++;
            ch=str[i+1];
            cnt=0;

        }
        //cout<<cnt<<" ";
    }
    cout<<ans<<endl;

}
