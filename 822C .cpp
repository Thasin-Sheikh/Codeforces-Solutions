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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
ll l,r,cost;
ll bestcost[N+10];
vector<pair<pair<ll,ll>,pair<ll,ll>>>v;
void solve()
{
    ll i,j,k,m,n,q,p,ans,sum=0;
    string str;
    bool yes=true;
    ll x;
    cin>>n>>x;
    vector<ll>pos;
    for(i=1; i<=n; i++)
    {
        cin>>l>>r>>cost;
        v.push_back({{l,-1},{r,cost}});
        v.push_back({{r,1},{l,cost}});

    }
    sort(v.begin(),v.end());
    ans=1000000000000000000;
    ll le=ans;
    for(i=0; i<N; i++)
    {
        bestcost[i]=ans;
    }
    for(i=0; i<v.size(); i++)
    {
        ll tp=v[i].first.second;
        if(tp==-1)
        {
            ll a=v[i].second.first-v[i].first.first+1;
            ll b=x-a;
            if(b>0&&b<x)
            {
                ans=min(ans,bestcost[b]+v[i].second.second);
            }
        }
        else
        {
            ll a=v[i].first.first-v[i].second.first+1;
            bestcost[a]=min(bestcost[a],v[i].second.second);
        }
        //cout<<i<<endl;
    }
    if(ans==le)
    {
        cout<<-1<<"\n";
    }
    else
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
