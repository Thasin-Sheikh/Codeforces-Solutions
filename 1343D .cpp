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
ll pre[4000000];
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
    }
    for(i=1;i<=2*k+1;i++)
    {
        pre[i]=0;
    }
    for(i=1;i<=n/2;i++)
    {
        l=aarray[i]+aarray[n-i+1];
        mp[l]++;
        ll a,b,c,d;
        a=aarray[i]+1;
        b=aarray[i]+k;
        c=aarray[n-i+1]+1;
        d=aarray[n-i+1]+k;
        a=min(a,c);
        b=max(b,d);
        pre[a]++,pre[b+1]--;
    }
    for(i=2;i<=2*k;i++)
    {
        pre[i]+=pre[i-1];
    }
    ans=INT_MAX;
    for(i=2;i<=2*k;i++)
    {
        r=(pre[i]-mp[i])+(n/2-pre[i])*2;
        ans=min(ans,r);
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
        mp.clear();
        solve();
    }
    return 0;
}
