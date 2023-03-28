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
ll ans[200000+10];
ll ar[200000+10];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a,c,d,e,f,i,j,k,g,sum=0;
    vector<ll>vp;
    set<ll>sc;
    char ch;
    for(i=0; i<6; i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
    }
    for(i=0; i<6; i++)
    {
        for(j=i+1; j<6; j++)
        {
            for(k=j+1; k<6; k++)
            {
                if((aarray[i]+aarray[j]+aarray[k])*2==sum)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
  cout<<"NO"<<endl;


}
