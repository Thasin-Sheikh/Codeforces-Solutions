/***By the name of Allah***/
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
    ll n,m,b=4,dec=0,i,p;
    string  s;
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        dec=dec+(s[i]-'0');
    }
    if(dec==0)
        cout<<0<<endl;
    else if(dec==1)
    {
        cout<<s.length()/2<<endl;
    }
    else cout<<(s.length()+1)/2<<endl;



}
