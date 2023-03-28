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
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    dl w;
    cin>>n>>w;
    for(i=1;i<=2*n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    ll a,b;
    a=v[0];
    b=v[n];
    dl ans;
    if(b>=2*a)
    {
        ans=(n*a)+(n*2*a);
    }
    else
    {
        dl c,d,e;
        c=2*a;
        d=c-b;
        e=d/2;
        e=dl(a)-e;
        ans=n*e+dl(2*dl(e)*dl(n));
    }
    ans=min(ans,dl(w));
    cout<<setprecision(15)<<ans<<"\n";
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

