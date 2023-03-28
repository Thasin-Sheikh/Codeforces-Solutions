///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
ll aarray[100000+10];
ll magic[501][501];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a,s,r,i,j,m,k,ans=INT_MIN,c,t,g,sum,array[100000+10];
    vector<ll>vp;
    set<char>sc;
    char ch;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(b=0;b<n;b++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            if(i%k!=b%k)
                sum+=array[i];
        }
        ans=max(ans,abs(sum));
    }
  cout<<ans<<endl;

}
