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
    ll m1,m2,m3,m4,i,j,x,y,n,k,m5,m,ta,t,flag=0,sum=0,ans=0;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    ll count[100001];
    memset(count,0,sizeof(count));
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>k;
        count[k]++;
    }
    for(i=100; i>=1; i--)
    {
        if(count[i]>1)
        {
            dvi.push_back(count[i]);
        }
        else continue;
    }
    sort(dvi.begin(),dvi.end());
    reverse(dvi.begin(),dvi.end());
    for(i=0; i<dvi.size(); i++)
    {
        if(dvi[i]%2==1)
        {
            dvi[i]=dvi[i]-1;
        }
    }
    for(i=0; i<dvi.size(); i++)
    {
        sum+=dvi[i];
    }
    cout<<sum/4<<endl;



}
