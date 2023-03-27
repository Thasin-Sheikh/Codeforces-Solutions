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
    ll candy=0,move=0,m,n,eat=0,l,t,i,j,barry[100000+10],f,a,b,array[100000+10],ans=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i]>>barry[i];
    }
    for(i=0; i<n; i++)
    {
        m=array[i];
        t=barry[i];
        ll l=0,u=0,r=0,d=0;
        for(j=0; j<n; j++)
        {
            if(array[j]>m&&barry[j]==t)
                r++;
            if(array[j]<m&&barry[j]==t)
                l++;
            if(array[j]==m&&barry[j]<t)
                u++;
            if(array[j]==m&&barry[j]>t)
                d++;
        }
        if(r&&l&&u&&d)
            ans++;
    }
    cout<<ans<<endl;


}
