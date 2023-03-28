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
    cin>>t;
    while(t--)
    {
        cin>>str>>ptr;
        f=1;
        sort(str.begin(),str.end());
        //cout<<str<<endl;
        m=str.length();
        for(i=0;i<=ptr.length()-m;i++)
        {
            string add;
            for(j=i;j<m+i;j++)
            {
                add+=ptr[j];
            }
            sort(add.begin(),add.end());
            //cout<<add<<endl;
            if(add==str)
            {
                f=0;
                cout<<"YES"<<endl;
                break;
            }

        }
        if(f)
        {
            cout<<"NO"<<endl;
        }
    }

}
