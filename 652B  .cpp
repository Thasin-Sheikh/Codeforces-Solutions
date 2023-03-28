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
    ll candy=0,move=0,m,n,i,t,j,sum1,sum,a,b,r,s=0,rs,array[200001],f;
    vector<ll>vp;
    set<char>sc;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>array[i];
    sort(array,array+n);
    for(i=0;i<n/2;i++)
    {
        cout<<array[i]<<" "<<array[n-i-1]<<" ";
    }
    if(n%2!=0)
        cout<<array[n/2]<<endl;
    cout<<endl;


}
