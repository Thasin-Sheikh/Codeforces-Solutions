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
ll a[200000+10],b[200000+10];
vector<ll>v,vv;
map<ll,ll>mp1,mp2;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    ll same=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        k=b[i]-a[i];
        t=a[i]+b[i];
        mp1[k]++,mp2[t]++;
    }
    ll ans=0;
    for(auto c:mp1)
    {

        ans+=(c.second*(c.second-1))/2;
    }
    //cout<<ans<<endl;
    for(auto c:mp2)
    {
        ans+=(c.second*(c.second-1))/2;
    }
    cout<<ans<<endl;
}


