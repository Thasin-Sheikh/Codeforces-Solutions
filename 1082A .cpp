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
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll x,y,d;
    cin>>n>>x>>y>>d;
    k=abs(y-x);
    if(k%d==0)
    {
        cout<<k/d<<"\n";
        return ;
    }
    k=n-y;
    ll aa=INT_MAX;
    if(k%d==0)
    {
        ans=(n-x)/d;
        if((n-x)%d)
        {
            ans++;
        }
        ans+=k/d;
        aa=min(aa,ans);
    }
    ans=0;
    k=y-1;
    if(k%d==0)
    {
        ans=(x-1)/d;
        if((x-1)%d)
        {
            ans++;
        }
        ans+=k/d;
        aa=min(ans,aa);
    }
    if(aa==INT_MAX)
    cout<<-1<<"\n";
    else cout<<aa<<"\n";
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


