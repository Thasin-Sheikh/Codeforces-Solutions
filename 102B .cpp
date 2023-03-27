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
    ll b=0,u=0,l=0,B=0,a=0,s=0,r=0,i,j;
    vector<ll>vp;
    set<char>sc;
    ll cnt=0;
    cin>>ptr;
    if(ptr.length()==1)
    {
        cout<<0<<endl;
        return 0;
    }
    while(1)
    {
        ll sum=0;
        for(i=0; i<ptr.length(); i++)
        {
            sum+=(ptr[i]-'0');
        }
        //cout<<sum<<endl;
        ostringstream s1;
        s1<<sum;
        ptr=s1.str();
        if(ptr.length()==1)
        {
            cout<<cnt+1<<endl;
            return 0;
        }
        else cnt++;

    }

}
