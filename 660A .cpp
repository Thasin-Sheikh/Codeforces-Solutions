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
const int N = 2e5 + 10;
int main()
{
    makefast__
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string ptr,str,ktr;
    ll m1,m2,m3,m4,i,j,x=INT_MIN,b,p,y,n,k,m5,m,ta,t,flag=0,sum=0;
    ll w1,w2,w3,w4,w5;
    ll ar[100000+10];
    vector<ll>dvi,ans;
    ll d,month,cnt=0,a;
    cin>>n;
    cin>>a;
    aarray[0]=a;
    b=a;
    dvi.push_back(b);
    for(i=1;i<n;i++)
    {
        cin>>aarray[i];
        if(__gcd(b,aarray[i])!=1)
        {
            dvi.push_back(1);
            dvi.push_back(aarray[i]);
            b=aarray[i];
        }
        else
        {
            dvi.push_back(aarray[i]);
            b=aarray[i];
        }
    }
    k=dvi.size()-n;
    cout<<k<<endl;
    for(i=0;i<dvi.size();i++)
        cout<<dvi[i]<<" ";



}
