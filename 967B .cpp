///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
ll aarray[100000+10];
char magic[1][100000];
ll ar[200000+10];
const int N = 2e5 + 10;
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,a,x=0,y=0,n,k,m5,m,ta,t,flag,sum=0,ans=0;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    ll hole,A,B;
    cin>>hole>>A>>B;
    for(i=1; i<=hole; i++)
    {
        cin>>aarray[i];
    }
    x=aarray[1];
    y=x;
    sort(aarray+2,aarray+hole+1);
    for(i=2;i<=hole;i++)
    {
        y+=aarray[i];
        if(y*B>x*A)
        {
            cout<<hole-i+1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;

}
