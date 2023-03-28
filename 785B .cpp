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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    ll a,b;
    vector<pair<ll,ll>>v1,v2;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        v1.push_back({b,a});
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        v2.push_back({b,a});
    }
    sort(v1.begin(),v1.end());
    k=v1[0].first;
    ll ans=0;
    for(i=0;i<v2.size();i++)
    {
        ll p=v2[i].second-k;
        ans=max(ans,p);
    }
    sort(v2.begin(),v2.end());
    k=v2[0].first;
    for(i=0;i<v1.size();i++)
    {
        ll p=v1[i].second-k;
        ans=max(ans,p);
    }
    cout<<ans<<"\n";

    return 0;
}

