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
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0,sa=0,sb=0,sc=0;
    string str;
    bool yes=true;
    vector<ll>a,b,c,v;
    ll n1,n2,n3;
    cin>>n1>>n2>>n3;
    for(i=1; i<=n1; i++)
    {
        cin>>k;
        a.push_back(k);
        sa+=k;
    }
    for(i=1; i<=n2; i++)
    {
        cin>>k;
        b.push_back(k);
        sb+=k;
    }
    for(i=1; i<=n3; i++)
    {
        cin>>k;
        c.push_back(k);
        sc+=k;
    }
    sum=sa+sb+sc;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    l=max({a[0],b[0],c[0]});
    r=a[0]+b[0]+c[0]-l;
    r*=2;
    ll s=sum-r;
    ll p;
    p=max({sa,sb,sc});
    q=min({sa,sb,sc});
    ans=sum-(p+q)+p-q;
    ans=max(ans,s);
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

