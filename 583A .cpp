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
    set<ll>vp;
    vector<ll>ind;
    bool h[100007],v[100007];
    memset(h,false,sizeof(h));
    memset(v,false,sizeof(v));
    cin>>n;

    for(i=1; i<=n*n; i++)
    {
        cin>>array[i]>>barry[i];
    }
    for(i=1; i<=n*n; i++)
    {
        if(h[array[i]]==false&&v[barry[i]]==false)
        {
            cout<<i<<" ";
            h[array[i]]=true;
            v[barry[i]]=true;
        }
    }
    cout<<endl;

}
