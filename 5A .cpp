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
int main()
{
    makefast__
    string ptr;
    char str[101];
    ll m1,m2,m3,m4,i,j,n,k,m5,m,ta,t,flag=0,ans=0;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    set<ll>sc;
    for(;;)
    {
        char ch[1000];
        if(!gets(ch))
            break;
        if(ch[0]=='+')
            flag++;
        else if(ch[0]=='-')
            flag--;
        else
        {
            for(j=0; j<strlen(ch); j++)
            {
                if(ch[j]==':')
                {
                    k=j+1;
                    ans+=flag*(strlen(ch)-k);
                }
            }
        }
    }
    cout<<ans<<endl;


}
