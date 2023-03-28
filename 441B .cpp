///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m=0,a,b,k,t,ans=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        mp[a]+=b;
        m=max(a,m);
    }
    for(i=1;i<=m+1;i++)
    {
        if(mp[i-1]>=k)
        {
            ans+=k;
        }
        else
        {
            ll d=k-mp[i-1];
            ll e=min(d,mp[i]);
            mp[i]-=e;
            ans+=e+mp[i-1];
        }
    }
    cout<<ans<<endl;

    return 0;
}



