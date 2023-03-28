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
    ll n,candy=0,move=0,m,eat=0,l,k,t,i,j,array[100000+10],barry[100000+10],f;
    vector<pair<ll,ll>>cv;
    ll count[1001];
    vector<string>sv;
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    char ch1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        if(i%4==0||i%4==1)
            cout<<'a';
        else cout<<'b';
    }


}
