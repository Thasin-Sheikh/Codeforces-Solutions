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
const long maxn=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
ll n,k;
string str;
ll bs(ll h)
{
    ll i,j;
    map<char,ll>mc;
    for(i=0; i<h; i++)
    {
        mc[str[i]]++;
    }
    ll ma=0,sm=0;
    for(auto it:mc)
    {
        sm+=it.second;
        ma=max(ma,it.second);
    }
    sm-=ma;
   // cout<<sm<<" "<<ma<<endl;
    if(sm<=k)
    {
        return true;
    }
    for(i=h; i<n; i++)
    {
        mc[str[i]]++;
        mc[str[i-h]]--;
        if(mc[str[i-h]]==0)
        {
            mp.erase(str[i-h]);
        }
        sm=0;ma=0;
        for(auto it:mc)
        {
            sm+=it.second;
            ma=max(ma,it.second);
        }
        //cout<<i<<" "<<sm<<" "<<ma<<endl;
        sm-=ma;
        if(sm<=k)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    ll i,j,m,l,r,q,p,ans=0,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    cin>>str;
    l=1,r=n;
    while(l<=r)
    {
        m=(l+r)/2;
        //cout<<m<<endl;
        if(bs(m))
        {
            //cout<<m<<endl;
            ans=max(ans,m);
            l=m+1;
        }
        else
            r=m-1;
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
