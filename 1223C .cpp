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
vector<ll>v;
ll x,a,y,b,target;
ll bs(ll vl)
{
    ll i,j,k;
    ll dui=(a*b)/(__gcd(a,b));
    ll tot=0;
    // cout<<dui<<endl;
    ll fdui=vl/dui;
    ll fa=vl/a;
    ll fb=vl/b;
    fa-=fdui;
    fb-=fdui;
    vector<ll>cur;
    for(i=vl-1; i>=0; i--)
    {
        cur.push_back(v[i]);

    }
    while(fdui)
    {
        tot+=((cur.back()/100)*(x+y));
        cur.pop_back();
        fdui--;
    }
    if(x>y)
    {
        while(fa)
        {
            tot+=(cur.back()/100)*x;
            fa--;
            cur.pop_back();
        }
        while(fb)
        {
            tot+=(cur.back()/100)*y;
            fb--;
            cur.pop_back();
        }
    }
    else
    {
        while(fb)
        {
            tot+=(cur.back()/100)*y;
            fb--;
            cur.pop_back();
        }
        while(fa)
        {
            tot+=(cur.back()/100)*x;
            fa--;
            cur.pop_back();
        }
    }
    if(tot>=target)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    v.clear();
    for(i=1; i<=n; i++)
    {
        cin>>l;
        v.push_back(l);
    }
    cin>>x>>a;
    cin>>y>>b;
    cin>>target;
    l=1;
    r=n;
    ans=INT_MAX;
    sort(v.rbegin(),v.rend());
     while(l<=r)
     {
         m=(l+r)/2;
         //cout<<m<<endl;
         if(bs(m))
         {
             ans=min(ans,m);
             r=m-1;
         }
         else l=m+1;
     }
     if(ans==INT_MAX)
     {
         cout<<-1<<"\n";
     }
     else cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

