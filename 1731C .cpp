#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<map>
#define makefast__ ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
using ll=long long int;
#define MOD 1000000007;
vector<ll>v;
ll aarray[200005];

void solve()
{
    ll i,j,k,n,m;
    cin>>n;
    vector<ll>mp(2*n);
    ll a,xr=0,b;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];

    }
    ll ans=(n*(n+1))/2;
    mp[0]++;
    ll cnt=0;
    for(i=1; i<=n; i++)
    {
        xr^=aarray[i];
        for(j=0; j*j<2*n; j++)
        {
            if((xr^(j*j))<2*n)
            {
                if(mp[xr^(j*j)])
                {
                    ans-=mp[xr^(j*j)];
                }
            }
        }
        mp[xr]++;
    }
    ans-=cnt;
    cout<<ans<<"\n";

}
int main()
{
    ll i,j,t;
    makefast__
    cin>>t;
    while(t--)
    {
        solve();
    }
}
