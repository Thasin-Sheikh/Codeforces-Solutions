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
ll cur[N];
map<ll,ll>mp;
ll a[200000+100],b[200000+100];
vector<ll>ed[N];
 map<pair<ll,ll>,ll>ans;
void dfs(ll node)
{
    cur[node]=1;
    for(ll i=0;i<ed[node].size();i++)
    {
       ll  k=ed[node][i];
       if(cur[k])
       {
           continue;
       }
        ll lk=vis[k];
        ll d=abs(lk-vis[node]);
        //cout<<node<<" "<<k<<" "<<d<<endl;
        ans[{node,k}]=d;ans[{k,node}]=d;
        dfs(k);
    }

}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll cnt[n+10];
    ans.clear();
    for(i=1;i<=n;i++)
    {
        ed[i].clear();
    }
    ll fl;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        ed[a[i]].push_back(i);
        cnt[i]=0;
        vis[i]=-1;
        cur[i]=0;
        if(i==a[i])
        {
            fl=i;
            cnt[i]++;
        }
    }
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    for(i=1; i<=n; i++)
    {
        k=a[b[i]];
        if(cnt[k]==0)
        {
            cout<<-1<<"\n";
            return ;
        }
        cnt[b[i]]++;

    }
    vis[b[1]]=0;
    ll ma=1;
    for(i=1; i<=n; i++)
    {
        if(vis[b[i]]!=0)
        {
            vis[b[i]]=ma;
            ma++;
        }
    }
    if(b[1]!=fl)
    {
        cout<<-1<<"\n";
        return ;
    }
    dfs(fl);
    for(i=1;i<=n;i++)
    {
        cout<<ans[{a[i],i}]<<" ";
    }
    cout<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

