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
ll ans[200000+10];
ll ar[200000+10];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a,c,m,d,e,f,i,j,k,g,ta,ans,fa,tb,fb,sum,tower,floor,q;
    dl sumblue=0,sumred=0;
    vector<ll>vp,ph;
    set<ll>sc;
    char ch;
    ll countA[10000];
    ll countB[10000];
    memset(countA,0,sizeof(countA));
    memset(countB,0,sizeof(countB));
    cin>>n>>m;
    cin>>str>>ptr;
    ans=INT_MAX;
    for(i=0; i<n; i++)
        vp.push_back(i);
    for(i=0; i<m-n+1; i++)
    {
        ll op;
        ph.clear();
        op=0;
        for(j=i; j<str.length()+i; j++)
        {
            if(ptr[j]!=str[op])
            {
                ph.push_back(op);
            }
             op++;
        }
       // for(j=0;j<ph.size();j++)
         //   cout<<ph[i]<<" ";
        if(vp.size()>ph.size())
            vp=ph;
       // ph.clear();
        //cout<<endl;
    }
    cout<<vp.size()<<endl;
    for(i=0; i<vp.size(); i++)
        cout<<vp[i]+1<<" ";



}
