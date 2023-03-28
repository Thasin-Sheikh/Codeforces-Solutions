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
ll k;
ll bs(ll m)
{
    ll p,s=0;
    p=m;
    while(m)
    {
        s+=m%10;
        m/=10;
    }
    //cout<<p<<" "<<s<<endl;
    if(p-s<k)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,n,m,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    l=1,r=n;
    ans=0;
    while(l<=r)
    {
        m=(l+r)/2;
        if(bs(m))
        {
           // cout<<m<<endl;
            ans=max(ans,m);
            l=m+1;
        }
        else r=m-1;
    }
    //cout<<ans<<endl;
    cout<<max(0LL,n-ans)<<"\n";
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


