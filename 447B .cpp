///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
#include<regex>
#include<math.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
set<ll>sc,ans;
int main()
{
    makefast__
    string ptr,str,uni;
    ll n,i,j,p,m,after,x=INT_MIN,t,a,sum1,y,k,sum=0,b[100000],s=0,l,flag;
    vector<pair<ll,ll>>cv;
    ll count[26];
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    list<ll>lc;
    cin>>str;
    cin>>k;
    for(i=0; i<26; i++)
    {
        cin>>a;
        count[i]=a;
    }
    for(i=0;i<26;i++)
    {
        x=max(x,count[i]);
    }
     l=1;
    for(i=0;i<str.length();i++)
    {
        sum=sum+(l*count[str[i]-'a']);
        l++;
        //cout<<sum<<endl;
    }
    ll len=str.length();
    len++;
    for(i=0;i<k;i++)
    {
        sum+=len*x;
        len++;
    }
    cout<<sum<<endl;


}
