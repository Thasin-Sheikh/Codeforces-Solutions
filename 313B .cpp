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
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
bool fk[100000];
ll aarray[100000+10];
char magic[1][100000];
const int N = 2e5 + 10;
int main()
{
    makefast__
    string str,ptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,a,b,ans=0,i,A=0,B,C,D,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>v;
    ll ccount[100000+10];
    vector<ll>ar,ba,ca;
    cin>>str;
    ccount[0]=ccount[1]=0;
    ll l=0;
    ll len;
    len=str.length();
    for(i=2;i<=len;i++)
    {
        ll cnt=0;
        for(j=l;j<i-1;j++)
        {
            if(str[j]==str[j+1])
            {
                cnt++;
            }
        }
        l=i-1;
        ccount[i]=ccount[i-1]+cnt;
    }
    cin>>n;
  while(n--)
  {
      cin>>a>>b;
      cout<<ccount[b]-ccount[a]<<endl;
  }

}
