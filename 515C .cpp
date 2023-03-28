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

int main()
{
    makefast__
    string ptr,str,uni;
    ll candy=0,move=0,m,n=INT_MIN,eat=0,l,t,i,j,barry[100000+10],f,a,b,array[100000+10],ans=0,x,y,t2,c,k;
    cin>>n;
    cin>>str;
    vector<ll>vc;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='0'||str[i]=='1')
            continue;
        else if(str[i]=='2')
            vc.push_back(2);
        else if(str[i]=='3')
            vc.push_back(3);
        else if(str[i]=='4')
        {
            vc.push_back(3);
            vc.push_back(2);
            vc.push_back(2);
        }
        else if(str[i]=='5')
            vc.push_back(5);
        else if(str[i]=='6')
        {
            vc.push_back(5);
            vc.push_back(3);
        }
        else if(str[i]=='7')
        {
            vc.push_back(7);
        }
        else if(str[i]=='8')
        {
            vc.push_back(7);
            vc.push_back(2);
            vc.push_back(2);
            vc.push_back(2);
        }
        else if(str[i]=='9')
        {
            vc.push_back(7);
            vc.push_back(3);
            vc.push_back(3);
            vc.push_back(2);
        }

    }
 sort(vc.begin(),vc.end());
 reverse(vc.begin(),vc.end());
 for(i=0;i<vc.size();i++)
 {
     cout<<vc[i];
 }

}
