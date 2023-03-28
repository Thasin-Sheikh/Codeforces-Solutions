
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
ll a[N];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,ans=0,s=0;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        s+=aarray[i];
    }
    for(i=1; i<=k; i++)
    {
        cin>>a[i];
        t=s-aarray[a[i]];
        ans+=aarray[a[i]]*t;
        mp[a[i]]++;
        s-=aarray[a[i]];
    }
    //cout<<ans<<endl;
    for(i=1;i<n;i++)
    {
        if(mp[i]||mp[i+1])
        {
            continue;
        }
        ans+=aarray[i]*aarray[i+1];
    }
    if(mp[1]==0&&mp[n]==0)
        ans+=aarray[1]*aarray[n];
    cout<<ans<<"\n";

    return 0;
}


