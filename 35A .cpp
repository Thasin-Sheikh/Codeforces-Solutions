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
ll aarray[100000+10];
char magic[1][100000];
const int N = 2e5 + 10;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n,a,b,ans,i,j;
    cin>>n;
    ans=n;
    for(i=1;i<=3;i++)
    {
        cin>>a>>b;
        if(a==n)
        {
            ans=b;
            n=b;
        }
        else if(b==n)
        {
            ans=a;
            n=a;
        }
    }
    cout<<ans<<endl;

}
