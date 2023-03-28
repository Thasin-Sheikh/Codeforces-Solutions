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
    ll b,u,l,B,n,a,s,r,i,j,m,ans=INT_MAX,c,t,g;
    vector<ll>vp;
    set<char>sc;
    char ch;
    cin>>n;
    cin>>str;
    for(i=0; i<=n-4; i++)
    {
        ll cna,cnc,cng,cnt;
        a=abs(str[i]-'Z')+1;
        cna=abs(str[i]-'A');
        //cout<<a<<" "<<cna<<endl;
        cna=min(a,cna);
        c=abs('C'-'A')+('Z'-str[i+1])+1;
        cnc=abs(str[i+1]-'C');
        //cout<<c<<" "<<cnc<<endl;
        cnc=min(cnc,c);
        cnt=abs(str[i+2]-'T');
        t=abs(str[i+2]-'A')+('Z'-'T')+1;
        //cout<<t<<" "<<cnt<<endl;
        cnt=min(cnt,t);
        g=('Z'-str[i+3])+('G'-'A')+1;
        cng=abs(str[i+3]-'G');
        //cout<<g<<" "<<cng<<endl;
        cng=min(cng,g);
        ll f=cna+cnc+cng+cnt;
        ans=min(ans,f);
        //cout<<endl;
    }
    cout<<ans<<endl;


}
