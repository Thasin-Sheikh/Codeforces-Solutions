///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
int main()
{
    makefast__
    string ptr,str,uni;
    ll n,i,j,p,w=0,ans=0,a,b,m,ar1[1000],br[1000];
    vector<ll>vm;
    set<ll>s1,s2;
    char ch,ch1,ch2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ar1[i];
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>br[i];

    }
    for(i=0; i<n; i++)
    {
        for(j=0;j<m;j++)
        {
            b=(br[j]/ar1[i]);
            if(br[j]%ar1[i]==0)
            {
                vm.push_back(b);
            }
        }

    }
    sort(vm.begin(),vm.end());
    ll mngo;
    mngo=vm[vm.size()-1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(br[j]%ar1[i]==0&&br[j]/ar1[i]==mngo)
                ans++;
        }

    }
cout<<ans<<endl;

}
