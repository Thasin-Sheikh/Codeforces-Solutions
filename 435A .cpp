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
    ll b,u,l,B,n,a,c=0,m,d,e,f,i,j,k,g,ta,ans,fa,tb,fb,sum=0,tower,floor,q;
    dl sumblue=0,sumred=0;
    vector<ll>vp,ph;
    set<ll>sc;
    char ch;
    ll countA[10000];
    ll countB[10000];
    memset(countA,0,sizeof(countA));
    memset(countB,0,sizeof(countB));
    cin>>n>>m;
    for(i=0; i<n; i++)
        cin>>aarray[i];
    for(i=0; i<n; i++)
    {
        sum+=aarray[i];
        if(sum==m)
        {
            c++;
            sum=0;
        }
        else if(sum>m)
        {
            c++;
            sum=0;
            sum=aarray[i];
        }
    }
    if(sum!=0)
        c++;
    cout<<c<<endl;



}
