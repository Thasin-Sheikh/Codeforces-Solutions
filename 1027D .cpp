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
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
ll cost[N];
ll room[N];
ll ans,rom;
ll flag[N];
void dfs(ll rm)
{
    ll i,j,k;
    k=rm;
    map<ll,ll>Map;
    while(1)
    {
        vis[k]++;
        if(cost[k]<ans)
        {
            ans=cost[k];
            rom=k;
        }
        Map[k]++;
        k=room[k];
        if(vis[k]&Map[k]==0)
        {
            ans=0;
            rom=0;
            return ;
        }
        if(Map[k])
        {
            return ;
        }
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>cost[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>room[i];
        if(room[i]==i)
        {
            sum+=cost[i];
            vis[i]++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            rom=0;
            ans=INT_MAX;
            dfs(i);
            //cout<<i<<" "<<rom<<endl;
            cout<<i<<" "<<rom<<endl;
            if(rom!=0)
            {
                sum+=cost[rom];
            }
        }
    }
    cout<<sum<<"\n";
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


