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
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
        k=b[i]/m;
        if(b[i]%m!=0)
            k++;
        count[b[i]]=k;
    }
    for(i=1;i<=n;i++)
    {
        if(count[b[i]]>y)
            y=count[b[i]];
    }
    for(i=n;i>=1;i--)
    {
        if(count[b[i]]==y)
        {
            cout<<i<<endl;
            return 0;
        }
    }


}
