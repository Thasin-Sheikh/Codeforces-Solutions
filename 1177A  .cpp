///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
bool fk[100000];
ll aarray[300000+10];
char magic[1][100000];
const int N = 2e5 + 10;
bool primes[1000000];
string fu(ll x)
{
    string bal;
    while(x)
    {
        ll m=x%10;
        bal+=m+'0';
        x/=10;
    }
    reverse(bal.begin(),bal.end());
    return bal;
}
int main()
{
    makefast__
    string str,ptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,a,b,ans=0,i,l=0,m,A,B,C,D,E,cst,c,cd,d,j,k,x0,R,G;
    ll r,g;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=3000; i++)
    {
        str+=fu(i);
    }
    cout<<str[n-1]<<endl;
    return 0;


}
