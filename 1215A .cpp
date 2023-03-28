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
    ll b,u,l,B,fp,sp,C,rc1,n,rc2,f,ar,mn,mxn,count[10000],m;
    vector<ll>vp;
    set<char>sc;
    char ch;
    set<ll>sl;
    cin>>fp>>sp>>rc1>>rc2>>n;
    mn=(fp*(rc1-1))+(sp*(rc2-1));
    mn=n-mn;
    if(rc1<rc2)
    {
        mxn=n/rc1;
        mxn=min(fp,mxn);
        n=n-(mxn*rc1);
        mxn=mxn+(n/rc2);
    }
    else
    {
        mxn=n/rc2;
        mxn=min(sp,mxn);
        n=n-(mxn*rc2);
        mxn+=(n/rc1);
    }
    if(mn<0)
        mn=0;
    if(mxn<0)
        mxn=0;
    cout<<mn<<" "<<mxn<<endl;




}
