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
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a,c,m,d,e,f,i,j,k,g=0,ta,ans=0,fa,tb,fb,sum,tower,floor,q,left[100000+10],right[100000+10];
    ll jor=0,bejor=0;
    vector<ll>vL,vR ;
    set<ll>sc;
    char ch;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>aarray[i];
        if(aarray[i]==0)
            g++;
    }
    if(n==1&&g==1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(g>1||(g==0&&n>1))
    {
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;

}
