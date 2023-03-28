///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
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
    ll n,i,j,p,w=0,ans=0,a,b,m,br[1000];
    vector<ll>vm;
    set<ll>s1,s2;
    cin>>str>>ptr;
    reverse(str.begin(),str.end());
    reverse(ptr.begin(),ptr.end());
    while(str.length()<ptr.length())
    {
        str+='0';
    }
    while(ptr.length()<str.length())
    {
        ptr+='0';
    }
    reverse(str.begin(),str.end());
    reverse(ptr.begin(),ptr.end());
    if(str>ptr)
    {
        cout<<'>'<<endl;
    }
    else if(str<ptr)
    {
        cout<<'<'<<endl;
    }
    else
        cout<<'='<<endl;

}
