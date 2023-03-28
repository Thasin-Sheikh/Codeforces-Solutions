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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<pair<dl,dl>>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        dl aa,bb;
        cin>>aa>>bb;
        v.push_back({aa,bb});
    }
    dl ans=maxval;
    sort(v.begin(),v.end());
    for(i=0;i+2<v.size();i++)
    {
        dl z,x,y;
        x=(v[i].first-v[i+1].first)*(v[i].first-v[i+1].first)+(v[i].second-v[i+1].second)*(v[i].second-v[i+1].second);
        y=(v[i+1].first-v[i+2].first)*(v[i+1].first-v[i+2].first)+(v[i+1].second-v[i+2].second)*(v[i+1].second-v[i+2].second);
        z=(v[i].first-v[i+2].first)*(v[i].first-v[i+2].first)+(v[i].second-v[i+2].second)*(v[i].second-v[i+2].second);
        ans=min(ans,x+y+z);


    }

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
