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
    ll b=0,u=0,l=0,B,n,a=0,s=0,r=0,i,j,array[200000],ans=INT_MAX;
    vector<ll>vp;
    set<char>sc;
    cin>>n;
    cin>>str;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(i=1; i<str.length(); i++)
    {
        if(str[i]=='L'&&str[i-1]=='R')
        {
            r=1;
            break;
        }
    }
    if(!r)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=1; i<str.length(); i++)
    {
        if(str[i]=='L'&&str[i-1]=='R')
        {
            ll dis=array[i]-array[i-1];
            dis/=2;
            ans=min(ans,dis);

        }
    }
    cout<<ans<<endl;

}
