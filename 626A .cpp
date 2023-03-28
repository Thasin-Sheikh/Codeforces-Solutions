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
ll ar[200000+10];
ll ccount[2000000+1];
ll fact(ll n)
{
    ll i,fct=1;
    for(i=1; i<=n; i++)
        fct*=i;
    if(n==0)
        return 0;
    else
        return fct;
}
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,n,k,m5,m,ta,t,flag=0,ans=0;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    set<ll>sc;
    cin>>n;
    cin>>str;
    ll u,r,d,l;
    for(i=0; i<str.length(); i++)
    {
        for(j=i; j<str.length(); j++)
        {
            u=0,r=0,l=0,d=0;
            for(k=i; k<=j; k++)
            {
                if(str[k]=='D')
                    d++;
                if(str[k]=='U')
                    d--;
                if(str[k]=='R')
                    l++;
                if(str[k]=='L')
                    l--;

            }
            if(d==0&&l==0)
                ans++;
        }
    }


    cout<<ans<<endl;

}
