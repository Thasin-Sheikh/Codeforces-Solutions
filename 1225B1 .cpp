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
    ll b,u,l,B,n,a,s,r,i,j,m,ans,sum,test,f,ar[10000],count[10000];
    vector<ll>vp;
    set<char>sc;
    char ch;
    set<ll>sl;
    cin>>test;
    while(test--)
    {
        cin>>n>>a>>b;
        ans=INT_MAX;
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        for(i=0; i<=n-b; i++)
        {
            set<ll>sl;
            sum=0;
            memset(count,0,sizeof(count));
            for(j=i;j<i+b;j++)
            {
                count[ar[j]]++;
            }
            for(ll k=i;k<i+b;k++)
            {
                if(count[ar[k]]!=0)
                {
                    sum++;
                    count[ar[k]]=0;

                }
            }
            ans=min(ans,sum);
        }
       cout<<ans<<endl;

    }

}
