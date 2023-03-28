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
    ll b,u,l,B,n,a,c=0,d,e,f,i,j,k,g,sum=0;
    dl sumblue=0,sumred=0;
    vector<ll>vp;
    set<ll>sc;
    char ch;
    ll countA[10000];
    ll countB[10000];
    cin>>n;
    memset(countA,0,sizeof(countA));
    memset(countB,0,sizeof(countB));
    for(i=0; i<n; i++)
    {
        cin>>a;
        countA[a]++;
    }
    for(i=0; i<n; i++)
    {
        cin>>a;
        countB[a]++;
    }
    for(i=1; i<=5; i++)
    {
        ll df=abs(countA[i]-countB[i]);
        if(df%2!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
        sum+=df/2;
    }

  cout<<sum/2<<endl;


}
