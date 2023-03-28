///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
bool fk[100000];
const int N = 2e5 + 10;
ll aarray[100000+10];
ll magic[101][101];
int main()
{
    makefast__
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,sum[200000+10],i,m,n,A=-1,B,C,D,ans,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>v;
    cin>>a>>b;
    if(abs(a-b)==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(a%2!=0&&b%2!=0&&abs(a-b)<=2)
    {
        cout<<-1<<endl;
        return 0;
    }
    else if(abs(a-b)<2)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(a%2!=0)
    {
        cout<<a+1<<" ";
        cout<<a+2<<" ";
        cout<<a+3<<endl;
    }
    else
    {
        cout<<a<<" ";
        cout<<a+1<<" ";
        cout<<a+2<<endl;
    }

}



