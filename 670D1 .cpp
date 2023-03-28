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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll a[N],b[N];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
ll n;
bool bs(ll num,ll kk)
{
    ll i,j,d;
    ll k=kk;
    for(i=1;i<=n;i++)
    {
        if(num*a[i]<=b[i])
            continue;
        if(num*a[i]>b[i])
        {
            ll c=num*a[i];
            d=c-b[i];
            if(k<d)
                return false;
            else
            {
                k-=d;
            }
        }
    }
    return true;

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,m,k,t,powder;
    cin>>n>>powder;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    ll l,r;
    l=0,r=1e10;
    ll ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(bs(mid,powder))
        {
            l=mid+1;
            ans=max(ans,mid);
        }
        else
            r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}



