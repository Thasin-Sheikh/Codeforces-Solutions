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
ll aarray[100000+10];
char magic[1][100000];
ll ar[200000+10];
const int N = 2e5 + 10;
int main()
{
    makefast__
    string ptr,str,hoga[29]= {"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE","TEQUILA","VODKA","WHISKEY","WINE"};
    int m1,m2,m3,m4,i,j,x,y,n,k,m5,m,ta,t,flag=0,sum=0,ans=0;
    ll w1,w2,w3,w4,w5;
    vector<ll>dvi,cvi;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>str;

        for(j=0; j<29; j++)
        {
            if(hoga[j]==str)
                ans++;
        }
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;

}
