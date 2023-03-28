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
ll ma[N+1];
ll mi[N+1];
map<char,vector<ll>>mp;
void solve()
{
    ll i,j,k,m,n,l,q,ans,sum=0;
    string str,s,t;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    cin>>s>>t;
    for(i=0; i<n; i++)
    {
        mp[s[i]].push_back(i);
    }
    l=-1;
    for(i=0; i<m; i++)
    {
        ll r=upper_bound(mp[t[i]].begin(),mp[t[i]].end(),l)-mp[t[i]].begin();
        mi[i]=mp[t[i]][r];
        l=mi[i];
    }
    for(auto &it:mp)
    {
        for(auto &jt:it.second)
        {
            jt=-jt;
        }
        sort(it.second.begin(),it.second.end());
    }
    l=-n-1;
    for(i=m-1; i>=0; i--)
    {
        ll r=upper_bound(mp[t[i]].begin(),mp[t[i]].end(),l)-mp[t[i]].begin();
        ma[i]=-mp[t[i]][r];
        l=-ma[i];
    }
    ans=0;
    for(i=1; i<m; i++)
    {
        ans=max(ans,ma[i]-mi[i-1]);
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

