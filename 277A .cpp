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
vector<ll>v[N],vc[N];
ll ans=0;
ll n,m,k;
ll ok[N];
void dfs(ll n)
{
    ll i,j;
    vis[n]=1;
    vector<ll>la,lang;
    for(i=0;i<v[n].size();i++)
    {
        la.push_back(v[n][i]);
        //cout<<n<<" "<<v[n][i]<<endl;
        ok[v[n][i]]=1;
    }
    for(j=0;j<la.size();j++)
    {
        for(i=0;i<vc[la[j]].size();i++)
        {
            ll laa=vc[la[j]][i];
            lang.push_back(laa);
        }
    }
    for(i=0;i<lang.size();i++)
    {
        if(vis[lang[i]]==0)
        dfs(lang[i]);
    }
}
void solve()
{
    ll i,j,l,a,r,q,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        for(j=1;j<=k;j++)
        {
            cin>>a;
            v[a].push_back(i);
            vc[i].push_back(a);
        }
    }
    for(i=1;i<=m;i++)
    {
        ll c=0;
        for(j=1;j<=n;j++)
        {
            if(ok[j])
            {
                c++;
            }
        }
        if(c==n)
        {
            break;
        }
        if(vis[i]==0&&v[i].size()!=0)
        {
            //cout<<i<<endl;
            sum++;
            dfs(i);
        }
    }
   ll z=0;
    for(i=1;i<=n;i++)
    {
        if(vc[i].size()==0)
        {
            z++;
        }
    }
    if(z==n)
    {
        cout<<z<<"\n";
        return ;
    }
    cout<<sum+z-1<<"\n";
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
