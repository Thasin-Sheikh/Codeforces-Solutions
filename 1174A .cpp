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
    ll n,i,j,p,m,after,a,k,mark,c=0,bose,daray,ans=INT_MIN,sum=0,array[100000+10],persuade[100000+10],guest,f,extra=0;
    vector<pair<ll,ll>>cv;
    set<ll>sc;
    cin>>n;
    for(i=0;i<2*n;i++)
    {
        cin>>array[i];
        sc.insert(array[i]);
    }
    if(sc.size()==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    sort(array,array+2*n);
    for(i=0;i<2*n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

}
