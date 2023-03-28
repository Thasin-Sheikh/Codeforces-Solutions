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
ll aarray[200000+10];
ll magic[501][501];
ll ans[200000+10];
ll ar[200000+10];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a,s,r,i,j,m,k,c,t,g,sum=0,flag;
    vector<ll>vp;
    set<ll>sc;
    char ch;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>aarray[i];
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    l=0;
    for(i=0; i<n; i++)
    {
        for(j=l; j<n; j++)
        {
            if(sc.find(ar[i])!=sc.end())
            {
                ans[i+1]=0;
                break;
            }
            else if(aarray[j]==ar[i])
            {
                ans[i+1]++;
                l=j;
                sc.insert(aarray[j]);
                aarray[j]=0;
                break;
            }
            else if(aarray[j]!=0&&aarray[j]!=ar[i])
            {
                ans[i+1]++;
                sc.insert(aarray[j]);
                aarray[j]=0;
            }
        }
        //cout<<endl;
    }
    for(k=1; k<=n; k++)
            cout<<ans[k]<<" ";


}
