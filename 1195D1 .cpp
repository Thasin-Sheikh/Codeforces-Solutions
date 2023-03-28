///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 998244353
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
ll pw[100];
ll f(ll n)
{
    ll c=0;
    ll res=0;
    while(n)
    {
        ll rem=n%10;
        n/=10;
        res=(res+rem*pw[c])%MOD;
        c++;
        res=(res%MOD+rem*pw[c])%MOD;
        c++;
    }
    //cout<<res<<endl;
    return res;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    pw[0]=1;
    for(i=1;i<=30;i++)
    {
        pw[i]=(pw[i-1]%MOD*10)%MOD;
    }
    ans=0;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        ans=ans+n*f(aarray[i]);
        ans%=MOD;
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
