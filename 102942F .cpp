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
ll k,m,n;
ll bs(ll h)
{
    ll i,j;
    map<ll,ll>mp;
    for(i=1; i<=h; i++)
    {
        mp[aarray[i]]++;
    }
    ll sum=0;
    for(auto it:mp)
    {
        sum+=it.first;
    }
    if(sum<=k)
    {
        return true;
    }
    for(i=h+1; i<=n; i++)
    {
        mp[aarray[i]]++;
        mp[aarray[i-h]]--;
        if(mp[aarray[i-h]]==0)
        {
            mp.erase(aarray[i-h]);
        }
        sum=0;
        for(auto it:mp)
        {
            sum+=it.first;
        }
        if(sum<=k)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    ll i,j,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    l=1,r=n;
    ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(bs(mid))
        {
            ans=max(ans,mid);
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
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
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

