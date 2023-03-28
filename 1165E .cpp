///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 998244353
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
vector<pair<ll,ll>>v;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>aarray[i];
    }
    vector<ll>a;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    ans=0;
    for(i=0;i<n;i++)
    {
        k=(i+1)*(n-i)*aarray[i];
        v.push_back({k,i});
    }
    sort(v.rbegin(),v.rend());
    for(i=0;i<v.size();i++)
    {
        //cout<<v[i].first<<endl;
        ans+=((v[i].first%MOD*1LL*a[i])%MOD);
        ans%=MOD;
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
