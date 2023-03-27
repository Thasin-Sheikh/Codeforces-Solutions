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
    ll n,i,j,p,m,after,a,k,mark,bose=0,daray=0,ans=0,array[10000],guest,f;
    vector<ll>cv,lb;
    set<pair<string,string>>sc;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ptr>>str;
        sc.insert(make_pair(ptr,str));

    }
    cout<<sc.size()<<endl;
}
