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
    ll n,i,j,p,m,after,x,t,a,sum1,y,k,sum,b[100000],s=0,l,flag;
    vector<pair<ll,ll>>cv;
    ll count[100000];
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    list<ll>lc;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n>=4)
        {
            cout<<"YES"<<endl;
        }
        else if(n>=2&&m<=3)
        {
            cout<<"YES"<<endl;
        }
        else if(n==1&&m<=1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;





    }

}


