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
ll magic[501][501];
int main()
{
    makefast__
    string ptr,str,uni;
    ll candy=0,move=0,m,n,i,j,sum1,sum,a,b,r,s=0,rs,array[10];
    set<ll>vp;
    vector<ll>ind;
    cin>>n;
    for(i=1; i<=7; i++)
    {
        cin>>array[i];
    }
    while(1)
    {
        for(i=1; i<=7; i++)
        {
            s+=array[i];
            if(s>=n)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }


}
