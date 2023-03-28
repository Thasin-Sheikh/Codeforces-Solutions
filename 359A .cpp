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
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
        }
    }
    m1=0;
    for(i=1,j=1; j<=m; j++)
    {
        if(magic[i][j]==1)
        {
            m1=1;
            break;
        }
    }
    if(m1==1)
    {
        cout<<2<<endl;
        return 0;
    }
    for(i=n,j=1; j<=m; j++)
    {
        if(magic[i][j]==1)
        {
            m1=1;
            break;
        }
    }
    if(m1==1)
    {
        cout<<2<<endl;
        return 0;
    }
     for(i=1,j=1; j<=n; j++)
    {
        if(magic[j][i]==1)
        {
            m1=1;
            break;
        }
    }
    if(m1==1)
    {
        cout<<2<<endl;
        return 0;
    }
    for(i=m,j=1; j<=n; j++)
    {
        if(magic[j][i]==1)
        {
            m1=1;
            break;
        }
    }
    if(m1==1)
    {
        cout<<2<<endl;
        return 0;
    }
    cout<<4<<endl;



}
