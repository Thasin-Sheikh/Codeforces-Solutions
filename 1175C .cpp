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
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
ll n,x;
ll ans=INT_MAX;
ll bs(ll lo)
{
    ll i,j;
    vector<ll>vv;
    for(i=1;i<=n;i++)
    {
        vv.push_back(abs(aarray[i]-lo));
    }
    sort(vv.begin(),vv.end());
    if(vv[x]<ans)
    {
        ans=lo;
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,k,m,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>x;
    ans=INT_MAX;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    ll pre=INT_MAX;
    for(i=1;i<=n-x;i++)
    {
        k=abs(aarray[i]-aarray[i+x]);
        if(k<pre)
        {
            pre=k;
            ans=aarray[i]+k/2;
        }
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
        solve();
    }

    return 0;
}


