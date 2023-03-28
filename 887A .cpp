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
    ll b,u,l,B,n,a,s,r,i,j,m,k,ans=INT_MIN,c=-1,t,g,sum=0,array[100000+10];
    vector<ll>vp;
    set<char>sc;
    char ch;
    cin>>ptr;
    m=ptr.length();
    for(i=0; i<ptr.length(); i++)
    {
        if(ptr[i]=='1')
        {
            c=i;
            break;
        }
    }
    //cout<<c<<endl;
    for(i=c;i<ptr.length();i++)
    {
        if(ptr[i]=='0')
            sum++;
    }

    //cout<<sum<<endl;
    if(c!=-1&&sum>=6)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
