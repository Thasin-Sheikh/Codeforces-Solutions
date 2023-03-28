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
    reverse(dvi.begin(),dvi.end());
    for(i=0;i<dvi.size();i++)
        cout<<dvi[i];*/
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
int a[N];
int main()
{
    makefast__
    string ptr,str;
    ll m1,m2,m3,m4,i,j,x,y,n,k,m5,m,ta,t,flag=0,sum=0,ans=INT_MAX;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    set<ll>sc;
    map<ll,ll>mp;
    char ch[100000];
    cin>>n;
    m1=sqrt(n);
    if(m1*m1==n)
    {
        cout<<2*(m1+m1)<<endl;
        return 0;
    }
    k=1;
    ll p;
    p=1;
    while(p<n)
    {
        x=n/k;
        if(n%k!=0)
            x++;
        y=2*(x+k);
        ans=min(ans,y);
        k++;
        p++;
    }
    cout<<ans<<endl;


}
