#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
using ll=long long int;
#define makefast__ ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll a[200005];
void solve()
{
    ll i,j,k,q,n;
    cin>>n>>q;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    for(i=1;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
            ans+=(i)*(n-i);
        }
    }
    ans+=(n*(n+1))/2;
    ll x;
    //cout<<ans<<"\n";
    while(q--)
    {
        cin>>i>>x;
        if(i!=n)
        {
            if(a[i]!=a[i+1])
            {
                ans-=(i*(n-i));
            }
            if(x!=a[i+1])
            {
                ans+=(i*(n-i));
            }
        }
        if(i>1)
        {
            if(a[i]!=a[i-1])
            {
                ans-=(i-1)*(n-i+1);
            }
            if(x!=a[i-1])
            {
                ans+=(i-1)*(n-i+1);
            }
        }
        a[i]=x;
        cout<<ans<<"\n";

    }
}
int main()
{
    makefast__
    ll t;
    t=1;
    while(t--)
    {
        solve();
    }

}
