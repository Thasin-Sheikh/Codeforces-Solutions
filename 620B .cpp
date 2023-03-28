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
    string ptr,str,uni,ans;
    ll b,u,l,B,n,a,c,m,d,e,f,i,j,k,g=0,ta,fa,tb,fb,sum,tower,floor,q,left[100000+10],right[100000+10];
    ll jor=0,bejor=0;
    vector<ll>vL,vR ;
    set<char>sc;
    string cl1,cl2;
    char ch;
    ll calculator[11]= {6,2,5,5,4,5,6,3,7,6,8};
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        m=i;
        while(m>0)
        {
            f=m%10;
            g+=calculator[f];
            m/=10;
        }
    }
    cout<<g<<endl;


}
