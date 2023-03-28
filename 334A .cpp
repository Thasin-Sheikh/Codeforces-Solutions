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
    ll n,i,j,p,m,after,a,b,c,t;
    vector<pair<ll,ll>>cv;
    ll count[26];
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    list<ll>lc;
    cin>>n;
    p=1;
    a=n*n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n/2;j++)
        {
            if(j!=1)
                cout<<" ";
            cout<<p<<" "<<a;
            p++;
            a--;
        }
        cout<<endl;
    }


}
