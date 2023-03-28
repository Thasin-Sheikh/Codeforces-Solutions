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
ll fact(ll to)
{
    ll i,j,k,l;
    k=to-3;
    l=3LL;
    ll p=min(k,l);
    ll r=max(k,l);
    ll res=1;
    ll w=1;
    while(p)
    {
        res*=to;
        w*=p;
        ll g=__gcd(res,w);
        res/=g;
        w/=g;
        p--;
        to--;
    }
    return res;

}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        v.push_back(l);
        mp[l]++;
    }
    sort(v.begin(),v.end());
    ans=mp[v[0]]*mp[v[1]]*mp[v[2]];
    if(v[0]==v[1]&&v[0]==v[2])
    {
        ans=fact(mp[v[0]]);
        cout<<ans<<"\n";
        return ;
    }
    if(v[0]==v[1])
    {
        cout<<mp[v[2]]<<"\n";
        return ;
    }
    if(v[1]==v[2])
    {
        ans=mp[v[1]]*(mp[v[1]]-1);
        ans/=2;
        cout<<ans<<"\n";
        return ;
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


