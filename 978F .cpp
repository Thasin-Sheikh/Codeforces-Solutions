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
vector<pair<ll,ll>>vv;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    vector<ll>v;
    ll a,b;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        v.push_back(a);
        vv.push_back({a,i-1});
    }
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        if(v[a-1]>v[b-1])
        {
            mp[a-1]++;
        }
        else if(v[b-1]>v[a-1])
        {
            mp[b-1]++;
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<vv.size();i++)
    {
        ll val=lower_bound(v.begin(),v.end(),vv[i].first)-v.begin();
        ll tot;
        tot=val-mp[vv[i].second];
        cout<<tot<<" ";
    }
    return 0;
}
