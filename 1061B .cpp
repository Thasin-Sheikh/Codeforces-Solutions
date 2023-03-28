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
ll ans[200000+10];
ll ar[200000+10];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a,c,m,d,e,f,i,j,k,g,ta,ans=0,fa,tb,fb,sum,tower,floor,q;
    dl sumblue=0,sumred=0;
    vector<ll>vp,ph;
    set<ll>sc;
    char ch;
    cin>>n>>m;
    ll maxh=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    sort(aarray,aarray+n+1);
    for(i=1; i<=n; i++)
    {
        if(aarray[i]>maxh)
            maxh++;
        ans+=aarray[i]-1;
    }
    ans=ans-(abs(aarray[n]-maxh));
    cout<<ans<<endl;

}
