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
vector<ll>v[N];
priority_queue<pair<ll,ll>>pq;
vector<ll>ans;
queue<ll>q;
ll dis[N];
void bfs( )
{
    while(q.size()>0)
    {
        ll k=q.front();
        for(ll i=0;i<v[k].size();i++)
        {
            ll s=v[k][i];
            if(dis[s]==INT_MAX)
            {
                dis[s]=dis[k]+1;
                q.push(s);
            }
        }
        q.pop();
    }

}
void solve()
{
    ll i,j,k,m,n,l,r,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    ans.clear();
    pq.empty();
    for(i=1; i<=n+10; i++)
    {
        v[i].clear();
        vis[i]=0;
        dis[i]=INT_MAX;
    }
    for(i=1; i<=m; i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    q.push(1LL);
    dis[1]=0;
    bfs();
    vector<ll>e,o;
    for(i=1;i<=n;i++)
    {
        if(dis[i]%2)
        {
            o.push_back(i);
        }
        else
        {
            e.push_back(i);
        }
    }
    if(e.size()<o.size())
    {
        cout<<e.size()<<"\n";
        for(auto a:e)
        {
            cout<<a<<" ";
        }
        cout<<"\n";
    }
    else
    {
        cout<<o.size()<<"\n";
        for(auto a:o)
        {
            cout<<a<<" ";
        }
        cout<<"\n";
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
