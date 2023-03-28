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
    string ptr[1001],str,uni;
    ll n,i,j,p,m,after,a,k,mark,bose=0,daray,ans=INT_MIN,sum=0,array[100000+10],persuade[100000+10],guest,f,extra=0;
    vector<pair<ll,ll>>cv;
    set<ll>sc;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ptr[i];
    }
    for(i=0; i<7; i++)
    {
        mark=0;
        for(j=0; j<n; j++)
        {
            if(ptr[j][i]=='1')
            {
                mark++;

            }

        }
        ans=max(ans,mark);

    }
    cout<<ans<<endl;


}
