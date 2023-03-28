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
int main()
{
    makefast__
    string ptr,str,uni;
    ll n,i,j,p,m,after,a,t,k,mark,c=0,bose,daray,ans=INT_MIN,sum=0,array[100000+10],persuade[100000+10],guest,f,extra=0;
    vector<pair<ll,ll>>cv;
    char ch[101][101];
    set<ll>sc;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
       for(i=1;i<=m;i++)
       {
           for(j=1;j<=n;j++)
           {
               if(j==n&&i==m)
               {
                   ch[j][i]='B';
               }
               else if(j%2!=0)
               {
                   ch[j][i]='B';
               }
               else
                ch[j][i]='W';
           }
       }
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=m;j++)
           {
               cout<<ch[i][j];
           }
           cout<<endl;
       }
    }


}
