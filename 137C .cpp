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
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>l>>r;
        v.push_back({l,r});

    }
    sort(v.begin(),v.end());
    ll a,b;
    a=v[0].first,b=v[0].second;
    ans=0;
    for(i=1;i<v.size();i++)
    {
        if(v[i].first>=a&&v[i].second<=b)
        {
            ans++;
        }
        a=min(a,v[i].first);
        b=max(b,v[i].second);
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
