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
    string ptr,str;
    ll m1,m2,m3,m4,i,j,x,b,p,y,n,k,m5,m,ta,t,flag=0,sum=0,ans=0;
    ll w1,w2,w3,w4,w5;
    ll ar[100000+10];
    vector<ll>dvi,cvi;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    sort(aarray,aarray+n+1);
    y=aarray[1];
    for(i=2;i<=n;i++)
    {
        if(aarray[i]%y!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<y<<endl;

}
