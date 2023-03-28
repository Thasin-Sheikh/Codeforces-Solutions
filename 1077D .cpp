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
vector<ll>ans,v;
ll n,m;
set<ll>s;
ll bs(ll c)
{
    ll hi=0;
    v.clear();
    for(auto it:s)
    {
        ll cur=mp[it];
        hi+=cur/c;
        ll e=cur/c;
        while(e--)
        v.push_back(it);
    }
    if(hi>=m)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,k,l,r,q,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
        s.insert(aarray[i]);
    }
    l=1,r=n;
    ll pr=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(bs(mid))
        {
            if(mid>pr)
            {
                ans=v;
                pr=mid;
            }
            v.clear();
            l=mid+1;
        }
        else
            r=mid-1;
    }
    //cout<<pr<<endl;
    for(i=0;i<m;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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
