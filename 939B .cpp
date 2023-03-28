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
    ll b,u,l,B,n,a=-1,start,end,r,i,j,m,k,c,t,g,sum=0,flag;
    vector<ll>vp;
    set<ll>sc;
    char ch;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>aarray[i];
    }
     u=n/(aarray[1]);
     B=u*aarray[1];
    // cout<<B<<endl;
     r=1;
    for(i=2;i<=m;i++)
    {
        k=n/aarray[i];
        g=k*aarray[i];
        if(g>B)
        {
            r=i;
            B=g;
        }
    }
    cout<<r<<" "<<B/aarray[r]<<endl;

}
