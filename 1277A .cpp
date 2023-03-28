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
    ll b,u,l,B,n,a,s,r,i,j,m,ans,sum=0,test,f,ar[200000+10],count[10000];
    vector<ll>vp;
    set<char>sc;
    char ch;
    set<ll>sl;
    cin>>test;
    while(test--)
    {
        cin>>n;
        s=0,ans=0;
        for(i=1;i<=9;i++)
        {
            s=s*10+1;
            for(j=1;j<=9;j++)
            {
                if(j*s<=n)
                {
                    ans++;
                }
            }

        }
        cout<<ans<<endl;

    }

}
