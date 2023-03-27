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
int removezero(ll n)
{
    int r=0,mk=1;
    while(n)
    {
        int dv=n%10;
        n/=10;
        if(dv)
        {
            r+=dv*mk;
            mk*=10;
        }
    }
    return r;
}
int main()
{
    makefast__
    string ptr,str,uni;
    ll n,i,j,p,m,after,a,b,c;
    vector<pair<ll,ll>>cv;
    ll count[26];
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    list<ll>lc;
    cin>>n>>m;
    a=removezero(n);
    b=removezero(m);
    c=removezero(n+m);
    if(a+b==c)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;



}
