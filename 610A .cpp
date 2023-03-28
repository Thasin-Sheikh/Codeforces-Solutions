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
    ll n,candy=0,move=0,m,eat=0,l=2,k;
    vector<pair<ll,ll>>cv;
    ll count[1001];
    vector<string>sv;
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    char ch1;
    list<ll>lc;
    cin>>n;
    m=n/4;
    if(n%2!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    if(m==1&&n>4)
    {
        cout<<1<<endl;
        return 0;
    }
    if(n%4==0)
    {
        cout<<(n/4)-1<<endl;
    }
    else
        cout<<n/4<<endl;


}
