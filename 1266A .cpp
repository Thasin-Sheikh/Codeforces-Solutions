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
    ll b,u,l,B,n,a,s,r,i,j,m,ans=INT_MAX,sum,test,f;
    vector<ll>vp;
    set<char>sc;
    char ch;
    set<ll>sl;
    cin>>test;
    while(test--)
    {
        cin>>ptr;
        a=0;
        b=0;
        sum=0;
        for(i=0;i<ptr.length();i++)
        {
            if((ptr[i]-'0')%2==0)
            {
                b++;
            }
            if(ptr[i]=='0')
            {
                a=1;
            }
            sum+=ptr[i]-'0';
        }
        //cout<<sum<<endl;
        //cout<<a<<" "<<b<<endl;
        if(sum==0)
        {
            cout<<"red"<<endl;
        }
        else if(sum%3==0&&a==1&&b>=2)
        {
            cout<<"red"<<endl;
        }
        else
            cout<<"cyan"<<endl;
    }

}
