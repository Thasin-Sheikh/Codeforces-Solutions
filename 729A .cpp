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
    ll n,i,j,p=2,m,after,a,mark,array[101],guest;
    vector<ll>cv;
    set<ll>sc;
    cin>>n;
    cin>>str;
    i=0;
    while(i<n)
    {
        j=i;
        while(j+2<n&&str[j]=='o'&&str[j+1]=='g'&&str[j+2]=='o')
        {
            j+=2;
        }
        if(j==i)
            cout<<str[i];
        else
            cout<<"***";
        i=j+1;
    }

}
