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
bool ok[1000001];
map<ll,ll>mp,pm;
ll a[200000+10],b[200000+10];
map<pair<ll,ll>,ll>mm;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    ll ans=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        ans+=mp[a[i]]++;
        ans+=pm[b[i]]++;
        ans-=mm[make_pair(a[i],b[i])]++;
    }
    cout<<ans<<endl;
    return 0;
}


