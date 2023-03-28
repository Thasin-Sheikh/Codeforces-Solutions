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
pair<ll,ll>pp[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>pp[i].second>>pp[i].first;
    }
    sort(pp+1,pp+n+1);
    set<pair<ll,ll>>s;
    ans=0;
    for(i=n;i>=1;i--)
    {
        sum+=pp[i].second;
        s.insert({pp[i].second,i});
        while(s.size()>m)
        {
            auto it=s.begin();
            sum-=(it->first);
            s.erase(*it);
        }
        ans=max(ans,sum*pp[i].first);
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


