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
    ll n,i,j,p,m,after,x,a,y=INT_MIN,k,sum=0,b[100000],s=0,l,flag;
    vector<pair<ll,ll>>cv;
    ll count[100000];
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    list<ll>lc;
    cin>>str;
    ptr=str;
    reverse(ptr.begin(),ptr.end());
    if(str==ptr&&str.length()%2==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    n=str.length();
    a=n/2;
    if(n%2!=0)
        a++;
    x=n-1;
    for(i=0; i<a; i++)
    {
        if(str[i]!=str[x])
            sum++;
        x-=1;
    }
    if(sum>1)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;


}
