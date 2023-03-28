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
    ll b,u,l,B,n,a,s,r,i,j,m,ans=0,sum=0,test,f,ar[200000+10],count[10000];
    vector<ll>vp;
    set<char>sc;
    char ch;
    set<ll>sl;
    cin>>m>>n>>u;
    for(i=0; i<m; i++)
        cin>>ar[i];
    sort(ar,ar+m);
    r=u*ar[m-1];
    s=n/(u+1);
    r+=ar[m-2];
    ans=r*s;
    if(n%(u+1)!=0)
    {
        B=n%(u+1);
    ans+=B*(ar[m-1]);}
    cout<<ans<<endl;

}
