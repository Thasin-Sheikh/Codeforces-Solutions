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
    ll candy=0,bm,move=0,m,n,i,t,j,sum1,sum,a,b,r,s=0,rs,array[200001],f,ans=0;
    vector<ll>vp;
    set<char>sc;
    cin>>n>>bm;
    f=1;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        r=abs(a-f);
        //cout<<r<<endl;
        f=b+1;
        if(r>=bm)
        {
            s=r/bm;
            m=r-(bm*s);
            ans+=m;
            //cout<<ans<<endl;
        }
        else
        {
            ans+=r;
        }
        ans+=abs(a-b)+1;
        //cout<<ans<<endl;

    }
   cout<<ans<<endl;



}
