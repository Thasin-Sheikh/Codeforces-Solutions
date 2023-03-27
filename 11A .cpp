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
    ll n,i,j,p=2,m,after,a,mark,ans=0,array[10000],guest;
    vector<ll>cv;
    set<ll>sc;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(i=1;i<n;i++)
    {
        if(array[i]<array[i-1])
        {
            ll dif=array[i-1]-array[i];
            mark=dif/m;
            if(dif%m!=0)
                mark++;
            ans+=mark;
            array[i]=array[i]+mark*m;

        }
         if(array[i]==array[i-1])
        {
            array[i]=array[i]+m;
            ans++;

        }
    }
    cout<<ans<<endl;
}
