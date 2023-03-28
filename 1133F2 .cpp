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
queue<ll>q;
vector<pair<ll,ll>>ans;
void bfs()
{

    while(q.size()>0)
    {
        ll val=q.front();
        for(ll i=0; i<v[val].size(); i++)
        {
            ll k=v[val][i];
            if(vis[k]==0)
            {
                vis[k]=1;
                ans.push_back({val,k});
                q.push(k);
            }
        }
        q.pop();
    }
}
void solve()
{
    ll i,j,k,m,n,d,l,r,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m>>d;
    for(i=1; i<=m; i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    if(v[1].size()<d)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    vis[1]=1;
    for(i=0; i<v[1].size(); i++)
    {
        q.push(v[1][i]);
        ans.push_back({1LL,v[1][i]});
        vis[v[1][i]]=1;
        d--;
        if(d==0)
        {
            break;
        }
    }
    bfs();
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    cout<<"YES"<<"\n";
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<'\n';
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
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
