///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
vector<ll>city,tower;
ll n,m;
ll bs(ll ra)
{
    vector<ll>ct;
    ct=tower;
    ll i,j;
    for(i=0;i<=n;i++)
    {
        aarray[i]=0;
    }
    for(i=0;i<ct.size();i++)
    {
        ll a,b;
        a=ct[i]-ra;
        b=ct[i]+ra;
        ll l,r;
        l=lower_bound(city.begin(),city.end(),a)-city.begin();
        r=upper_bound(city.begin(),city.end(),b)-city.begin();
        r--;
        if(r<l)
        {
            continue;
        }
        aarray[l]++;
        aarray[r+1]--;
    }
    for(i=0;i<n;i++)
    {
        aarray[i]+=aarray[i-1];
        if(aarray[i]==0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll i,j,k,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        city.push_back(k);
    }
    for(i=1;i<=m;i++)
    {
        cin>>k;
        tower.push_back(k);
    }
    l=0,r=1000000000000000000;
    ans=1000000000000000000;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(bs(mid))
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<"\n";

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

