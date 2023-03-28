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
ll aarray[200000+10];
ll magic[501][501];
ll ans[200000+10];
ll ar[200000+10];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a=0,s,d,r,i,j,m,k,c,t,g,sum=0,flag;
    vector<ll>vp;
    set<ll>sc;
    char ch;
    cin>>n>>m;
    for(i=1; i<=n; i++)
        cin>>aarray[i];

    i=1;
    while(1)
    {
        if(m-i>0)
        {
            m=m-i;
            i++;
        }
        else
        {
            cout<<aarray[m]<<endl;
            return 0;
        }
    }


}
