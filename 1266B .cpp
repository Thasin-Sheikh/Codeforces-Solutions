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
    ll b,u,l,B,n,a,s=0,r,i,j,m,ans,sum,test,f,ar[10000],count[10000];
    vector<ll>vp;
    set<char>sc;
    char ch;
    set<ll>sl;
    cin>>test;
    while(test--)
    {
        cin>>m;
        r=m%14;
        ans=floor(m/14);
        //cout<<r<<" "<<ans<<endl;
        if(ans>=1&&r>=1&&r<=6)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

}
