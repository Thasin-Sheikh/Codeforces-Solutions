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
vector<ll>v[4000];
ll cnt[4000];
ll dis[N];
void findlength(ll nod,ll len)
{
    ll i,j,k;
    cnt[nod]=1;
    if(vis[nod]==0)
    {
        //cout<<nod<<" "<<1<<endl;
        dis[nod]=0;
    }
    else
    {
        //cout<<nod<<" "<<2<<" "<<len<<endl;
        dis[nod]=len;
    }
    for(i=0; i<v[nod].size(); i++)
    {
        k=v[nod][i];
        if(cnt[k]==0)
        {
            findlength(k,dis[nod]+1);
        }
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    for(i=1;i<=n;i++)
    {
        mp[i]=v[i].size();
    }
    while(1)
    {
        queue<ll>pq;
        for(i=1;i<=n;i++)
        {
            if(mp[i]==1&&vis[i]==0)
            {
                pq.push(i);
            }
        }
        if(pq.size()==0)
        {
            break;
        }
        while(pq.size())
        {
            k=pq.front();
            pq.pop();
            vis[k]=1;
            for(i=0;i<v[k].size();i++)
            {
                l=v[k][i];
                mp[l]--;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            r=i;
            break;
        }
    }
    findlength(r,0);
    for(i=1;i<=n;i++)
    {
        cout<<dis[i]<<" ";
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
