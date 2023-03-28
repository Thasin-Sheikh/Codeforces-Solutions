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
ll aarray[500000];
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
    vector<ll>v;
    cin>>n>>k;
    l=(8*k)/n;
    r=(1LL<<min(l,20LL));
    set<ll>s;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        s.insert(aarray[i]);
        mp[aarray[i]]++;

    }
    if(r>=s.size())
    {
        cout<<0<<"\n";
        return ;
    }
    for(auto it:s)
        v.push_back(it);
    for(i=0; i<r; i++)
    {
        sum+=mp[v[i]];
    }
    ans=n-sum;
    for(i=r;i<v.size();i++)
    {
        sum+=mp[v[i]];
        sum-=mp[v[i-r]]--;
        ans=min(ans,n-sum);
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


