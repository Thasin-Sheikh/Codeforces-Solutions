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
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>v;
    cin>>n>>k;
    ll d[n+1],h[n+1];
    p=0;
    ll ma=0;
    m=0;
    for(i=1; i<=n; i++)
    {
        cin>>d[i]>>h[i];
        if(d[i]>=k)
        {
            sum++;
        }
        if(h[i]>=d[i])
        {
            p++;
        }
        ma=max(ma,d[i]-h[i]);
        m=max(m,d[i]);
    }
    if(p==n&&sum==0)
    {
        cout<<-1<<"\n";
        return ;
    }
    if(sum)
    {
        cout<<1<<"\n";
        return ;
    }
    ans=(k-m)/ma;
    if((k-m)%ma)
        ans++;
    ans++;
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


