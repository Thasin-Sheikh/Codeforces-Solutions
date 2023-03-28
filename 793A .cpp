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
    ll n,i,j,p,m,after,a,k,mark,bose=0,daray,ans=0,sum=0,array[100000+10],persuade[100000+10],guest,f,extra=0;
    vector<pair<ll,ll>>cv;
    set<ll>sc;
    ll cnt=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    a=array[0];
    for(i=1; i<n; i++)
    {
        k=(array[i]-a)/m;
        ans+=k;
        if((array[i]-a)%m!=0)
        {

            cout<<-1<<endl;
            return 0;
        }

    }
    cout<<ans<<endl;


}
