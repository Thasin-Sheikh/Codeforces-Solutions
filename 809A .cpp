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
ll p[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>aarray[i];
    }
    p[0]=1;
    for(i=1;i<=n;i++)
    {
        p[i]=(p[i-1]*2)%MOD;
    }
    sort(aarray,aarray+n);
    ans=0;
    for(i=1;i<n;i++)
    {
        ll d;
        d=aarray[i]-aarray[i-1];
        l=i;
        r=n-i;
        l=p[l]-1;
        r=p[r]-1;
        //cout<<l<<" "<<r<<endl;
        l*=r;
        l%=MOD;
        l*=d;
        l%=MOD;
        ans+=l;
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
