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
    ll count[4];
    memset(count,0,sizeof(count));
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        count[a]++;
    }
    p=INT_MIN;
    for(i=0;i<4;i++)
    {
        if(count[i]>p)
        {
            p=count[i];
        }

    }
    cout<<n-p<<endl;
}
