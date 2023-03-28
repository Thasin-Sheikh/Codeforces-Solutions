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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll pa[N],chi[N];
vector<ll>v[N];
ll dfs(ll nd)
{
    ll i,j;
    vis[nd]=1;
    chi[nd]=1;
    for(i=0;i<v[nd].size();i++)
    {
        ll k=v[nd][i];
        if(vis[k]==0)
        {
            pa[k]=1+pa[nd];
            chi[nd]+=dfs(k);
        }
    }
    return chi[nd];
}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>k;
    for(i=1;i<=n-1;i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    pa[1]=0;
    dfs(1);
    vector<ll>a;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" "<<chi[i]<<" "<<pa[i]<<endl;
        //a.push_back(chi[i]-pa[i]-1);
    }
    sort(a.rbegin(),a.rend());
    ans=0;
    for(i=0;i<n-k;i++)
    {
        ans+=a[i];
    }
    cout<<ans<<endl;
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

