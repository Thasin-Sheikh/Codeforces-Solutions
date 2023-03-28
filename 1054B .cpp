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
    string ptr,str;
    ll m1,m2,m3,m4,i,j,n,k,m5,m,ta,t,flag=0,ans=0;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    set<ll>sc;
    cin>>n;
    k=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<=n;i++)
    {
        if(aarray[i]>=i||aarray[i]>k+1)
        {
            cout<<i<<endl;
            return 0;
        }
        else
        {
            k=max(k,aarray[i]);
        }

    }
    cout<<-1<<endl;




}
