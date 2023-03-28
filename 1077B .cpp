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
    ll n,i,j,p,m,after,a,b,c,t,k,f,sum,ans=0;
    vector<pair<ll,ll>>cv;
    ll count[1001];
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    char ch1;
    list<ll>lc;
    ll array[1001];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(i=1; i<n-1; i++)
    {
        if(array[i]==0&&array[i-1]==1&&array[i+1]==1)
        {
            if(count[i-1]==0&&count[i+1]==0)
            {
                ans++;
                count[i+1]=1;
                count[i-1]=1;
                //cout<<ans<<" "<<i<<endl;
            }

        }
    }
    cout<<ans<<endl;

}
