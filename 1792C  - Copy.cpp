#include<stdio.h>
#include<iostream>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
using ll=long long int;
#define makefast__ ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll aarray[200005],pos[200005];
typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
ll n;
ll bs(ll m)
{
    ll a=m+1;
    ll b=n-m;
    ll j;
    //cout<<m<<" "<<a<<" "<<b<<"\n";
    for(j=a;j<b;j++)
    {
        if(pos[j]>pos[j+1])
        {
            return false;
        }
    }
    return true;

}
void solve()
{
    //ll n;
    ll i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        pos[aarray[i]]=i;
    }
    ll ans=0,a,b,c,d;
    ll l=0,r=n/2;
    while(l<=r)
    {
       ll m=(l+r)/2;
        if(bs(m))
        {
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
    cout<<ans<<"\n";

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
