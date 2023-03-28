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
vector<ll>v[N];
ll col[N];
void dfs(ll par,ll cur)
{
    ll i,j,k;
    ll ca=1;
    vis[cur]=1;
    for(i=0;i<v[cur].size();i++)
    {
        k=v[cur][i];
        if(vis[k])
        {
            continue;
        }
        if(ca==col[par])
        {
            ca++;
        }
        if(ca==col[cur])
        {
            ca++;
        }
        if(ca==col[par])
        {
            ca++;
        }
        col[k]=ca;
        ca++;
        dfs(cur,k);
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    ll lagbe=0;
    for(i=1;i<n;i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
        lagbe=max({lagbe,(ll)v[l].size(),(ll)v[r].size()});
    }
    lagbe++;
    vector<ll>nod;
    ll pa;
    for(i=1;i<=n;i++)
    {
        if(v[i].size()==lagbe-1)
        {
            ll c=2;
            pa=i;
            for(j=0;j<v[i].size();j++)
            {
                vis[v[i][j]]=1;
                col[v[i][j]]=c;
                c++;
                nod.push_back(v[i][j]);
            }
            vis[i]=1;
            col[i]=1;
            break;
        }
    }
    for(i=0;i<nod.size();i++)
    {
        dfs(pa,nod[i]);
    }
    cout<<lagbe<<"\n";
    for(i=1;i<=n;i++)
    {
        cout<<col[i]<<" ";
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

