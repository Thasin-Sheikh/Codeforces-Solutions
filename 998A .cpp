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
ll ar[200000+10];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a,c,m,d,e,f,i,j,k,g=0,ta,ans=0,fa,tb,fb,sum,tower,floor,q,left[100000+10],right[100000+10];
    ll jor=0,bejor=0;
    vector<ll>vL,vR ;
    set<ll>sc;
    char ch;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        ar[i]=aarray[i];
        sc.insert(aarray[i]);
    }
    sort(ar,ar+n+1);
    if(n==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(n==2&&sc.size()==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=n; i>1; i--)
    {
        for(j=1; j<=n; j++)
        {
            if(ar[i]==aarray[j])
            {
                vL.push_back(j);
                aarray[j]=0;
                break;
            }
        }
    }
    cout<<vL.size()<<endl;
    for(i=0; i<vL.size(); i++)
        cout<<vL[i]<<" ";


}
