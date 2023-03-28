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
ll aarray[100000+10];
ll magic[501][501];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a,s,c,d,r,i,j,m,ans,sum=0,test,f,ar[200000+10],count[10000];
    vector<ll>vp;
    set<char>sc;
    char ch;
    set<ll>sl;
    cin>>a>>b>>c>>B;
    if(a%b==0)
    {
        cout<<0<<endl;
        return 0;
    }

        r=a%b;
        //cout<<r<<endl;
        d=a/b;
        s=(d+1)*b;
        //cout<<s<<endl;
        ll dc=s-a;
        //cout<<dc<<endl;
        ll an,am;
        an=(r*B);
        //cout<<an<<endl;
        am=(dc*c);
        //cout<<am<<endl;
        cout<<min(an,am)<<endl;


}
