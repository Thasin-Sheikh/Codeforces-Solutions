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
ll ar[200000+10];
ll vi[40000+10];
ll  a,b;
int main()
{
    makefast__
    string ptr[6]= {"jolteon", "flareon", "umbreon", "leafeon", "glaceon", "sylveon"},str,uni;
    ll m1,m2,m3,m4,i,j,n,m5,l,r,ta,t,ans,fa,tb,fb,sum,tower,floor,q,left[100000+10],right[100000+10];
    ll w1,w2,w3,w4,w5;
    cin>>n;
    cin>>str;
    if(n==6)
    {
        cout<< "espeon"<<endl;
        return 0;
    }
    if(n==8)
    {
        cout<<"vaporeon"<<endl;
        return 0;

    }
    for(i=0; i<str.length(); i++)
    {
        for(j=0; j<6; j++)
        {
            if(ptr[j][i]==str[i])
            {
                if(str[3]=='r')
                {
                    cout<<"flareon"<<endl;
                    return 0;
                }
                else if(str[3]=='c')
                {
                    cout<<"glaceon"<<endl;
                    return 0;
                }
                if(str[3]=='v')
                {
                    cout<<"sylveon"<<endl;
                    return 0;

                }
                else  if(str[3]=='t')
                {
                    cout<<"jolteon"<<endl;
                    return 0;

                }
                else
                {
                    cout<<ptr[j]<<endl;
                    return 0;
                }
            }
        }
    }


}
