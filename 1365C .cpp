///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
ll a[200000],b[200000],cntr[200000+10],cntl[200000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,l,r,ans,anss,fans;
    cin>>n;
    memset(cntr,0,sizeof(cntr));
    memset(cntl,0,sizeof(cntl));
    map<ll,ll>mp,pm;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
        k=mp[b[i]]-i;
        if(k<0)
            k+=n;
        cntr[k]++;
    }
    cout<<*max_element(cntr,cntr+200000+10)<<endl;
    return 0;
}


