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
    ll b,u,l,B,n,a,c=0,d,e,f,i,j,k,g,ta,ans,fa,tb,fb,sum,tower,floor,q;
    dl sumblue=0,sumred=0;
    vector<ll>vp;
    set<ll>sc;
    char ch;
    ll countA[10000];
    ll countB[10000];
    memset(countA,0,sizeof(countA));
    memset(countB,0,sizeof(countB));
    cin>>tower>>floor>>a>>b>>q;
    while(q--)
    {
        g=INT_MAX;
        ll in;
        ans=0;
        cin>>ta>>fa>>tb>>fb;
        in=fa;
        if(ta==tb)
        {
            cout<<abs(fb-fa)<<endl;
        }
        else
        {
            ans=abs(tb-ta);
            if(fa>=a&&fa<=b)
            {
                ans+=(abs(fa-fb));
            }
            else if(fa>b)
            {
                ans+=(abs(b-fa))+abs(b-fb);
            }
            else
            {
                ans+=abs(a-fa)+abs(a-fb);
            }
            cout<<ans<<endl;
        }

    }

}
