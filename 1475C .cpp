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
map<ll,ll>mp,pp;
ll boy[N],girl[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll a,b;
    cin>>a>>b>>k;
    ans=(k*(k-1));
    for(i=1;i<=k;i++)
    {
        cin>>boy[i];
        mp[boy[i]]++;
    }
    for(i=1;i<=k;i++)
    {
        cin>>girl[i];
        pp[girl[i]]++;
    }
    for(i=1;i<=k;i++)
    {
        ans-=(mp[boy[i]]+pp[girl[i]]);
        ans+=2;
    }
    ans/=2;
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
        mp.clear();
        pp.clear();
        solve();
    }
    return 0;
}

