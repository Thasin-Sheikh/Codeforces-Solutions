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
ll fact[200000];
ll pw(ll b,ll p)
{
    ll pro=1;
    while(p)
    {
        if(p%2)
        {
            pro*=b;
            pro%=MOD;
            p--;
        }
        else
        {
            b*=b;
            b%=MOD;
            p/=2;
        }
    }
    pro%=MOD;
    return pro;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
    }
    sort(aarray+1,aarray+n+1);
    for(i=n-k+1;i<=n;i++)
    {
        if(aarray[i]==aarray[n-k+1])
        {

            sum++;
        }
    }
    ll a,b;
    a=mp[aarray[n-k+1]];
    b=sum;
    ll c=a-b;
    c=fact[c];
    a=fact[a];
    b=fact[b];
    //cout<<a<<" "<<b<<" "<<c<<endl;
    ll dhur=pw(b,MOD-2)%MOD;
    ll azob=pw(c,MOD-2)%MOD;
    ans=dhur*azob;
    ans%=MOD;
    ans=(ans*a)%MOD;
    ans+=MOD;
    ans%=MOD;
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
    fact[0]=1;
    fact[1]=1;
    for(i=2;i<=2005;i++)
    {
        fact[i]=(fact[i-1]*i)%MOD;
    }
    while(t--)
    {
        mp.clear();
        solve();
    }
    return 0;
}

