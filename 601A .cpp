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
typedef pair<ll,ll>Pi;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<pair<ll,ll>,ll>mp;
ll dis1[N],dis2[N];
vector<ll>v[500],bus[500];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        dis1[i]=dis2[i]=INT_MAX;
    }
    for(i=1; i<=m; i++)
    {
        cin>>l>>r;
        mp[ {l,r}]++;
        mp[ {r,l}]++;
    }
    priority_queue<Pi,vector<Pi>,greater<Pi>>pq1,pq2;
    pq1.push({0,1});
    dis1[1]=0;
    while(pq1.size())
    {
        pair<ll,ll>x=pq1.top();
        pq1.pop();
        for(i=1; i<=n; i++)
        {
            if(dis1[x.second]+1<dis1[i]&&mp[ {i,x.second}])
            {
                dis1[i]=x.first+1;
                pq1.push({dis1[i],i});
            }
        }
    }
    dis2[1]=0;
    pq2.push({0,1});
    while(pq2.size())
    {
        pair<ll,ll>x=pq2.top();
        pq2.pop();
        for(i=1; i<=n; i++)
        {
            if(dis2[i]>x.first+1&&mp[ {i,x.second}]==0)
            {
                dis2[i]=x.first+1;
                pq2.push({dis2[i],i});
            }
        }
    }
    ans=max(dis1[n],dis2[n]);
    if(ans==INT_MAX)
    {
        cout<<-1<<"\n";
        return ;
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
