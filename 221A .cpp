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
    ll b,u,l,B,n,a,c,m,d,e,f,i,j,k,g,ta,ans,fa,tb,fb,sum,tower,floor,q;
    dl sumblue=0,sumred=0;
    vector<ll>vp,ph;
    set<ll>sc;
    char ch;
    ll countA[10000];
    ll countB[10000];
    memset(countA,0,sizeof(countA));
    memset(countB,0,sizeof(countB));
    cin>>n;
    for(i=1;i<=n;i++)
    {
        vp.push_back(i);
    }
    for(i=n-1;i>=1;i--)
    {
        swap(vp[i],vp[i-1]);
    }
    for(i=0;i<n;i++)
        cout<<vp[i]<<" ";

}
