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
    ll count1[26];
    ll count2[26];
    cin>>t;
    while(t--)
    {
        f=0;
        memset(count1,0,sizeof(count1));
        memset(count2,0,sizeof(count2));
        cin>>ptr>>str;
        for(i=0; i<ptr.length(); i++)
        {
            for(j=0; j<str.length(); j++)
            {
                if(ptr[i]==str[j])
                {
                    cout<<"YES"<<endl;
                    f=1;
                    break;
                }
            }
            if(f)
                break;
        }
        if(!f)
        {
            cout<<"NO"<<endl;
        }


    }

}
