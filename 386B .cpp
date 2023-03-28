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
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll T,n;
ll bs(ll m)
{
    mp.clear();
    ll i,j;
    for(i=1; i<=m; i++)
    {
        mp[aarray[i]]++;
    }
    auto it=mp.begin();
    auto jt=mp.end();
    jt--;
    if((jt->first)-(it->first)<=T)
    {
        return true;
    }
    for(i=m+1; i<=n; i++)
    {
        mp[aarray[i]]++;
        mp[aarray[i-m]]--;
        if(mp[aarray[i-m]]==0)
        {
            mp.erase(aarray[i-m]);
        }
        auto it=mp.begin();
        auto jt=mp.end();
        jt--;
        if((jt->first)-(it->first)<=T)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    ll i,j,k,m,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    cin>>T;
    sort(aarray+1,aarray+n+1);
    l=1,r=n;
    ans=0;
    while(l<=r)
    {
        m=(l+r)/2;
        if(bs(m))
        {
            ans=max(ans,m);
            l=m+1;
        }
        else r=m-1;
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


