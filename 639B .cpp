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
vector<pair<ll,ll>>v;
vector<ll>nd[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m>>k;
    if(2*k<m)
    {
        cout<<-1<<"\n";
        return ;
    }
    if(m==1&&k==1&&n>2)
    {
        cout<<-1<<"\n";
        return ;
    }
    if(k>m)
    {
        cout<<-1<<"\n";
        return ;
    }
    ll tot=k+1;
    tot+=(m-k);
    ll cur=k;
    ll a,b;
    a=1,b=2;
    while(cur--)
    {
        v.push_back({a,b});
        nd[a].push_back(b);
        nd[b].push_back(a);
        a=b;
        b++;
    }
    ll last=a;
    a=1,b=last+1;
    for(i=1;i<=m-k;i++)
    {
        v.push_back({a,b});
        nd[a].push_back(b);
        nd[b].push_back(a);
        a=b;
        b++;
    }
    ll ses=v.back().second+1;
    if(nd[2].size()==1)
    {
        a=1;
    }
    else a=2;
    while(ses<=n)
    {
        v.push_back({a,ses});
        nd[a].push_back(ses);
        nd[ses].push_back(a);
        ses++;
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

