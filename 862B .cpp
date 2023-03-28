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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll flag[N];
vector<ll>v[N];
void dfs(ll n)
{
    ll i,j;
    vis[n]=1;
    for(i=0; i<v[n].size(); i++)
    {
        ll m=v[n][i];
        if(vis[m]==0)
        {
            flag[m]=!flag[n];
            dfs(m);
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    cin>>n;
    for(i=1; i<n; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    flag[1]=0;
    dfs(1);
    vector<ll>vv;
    for(i=1;i<=n;i++)
    {
        if(flag[i]==0)
        {
            vv.push_back(i);

        }
    }
    ll ans=0,baki;
    baki=n-vv.size();
    for(i=0;i<vv.size();i++)
    {
        ll p=v[vv[i]].size();
        p=baki-p;
        ans+=p;

    }
    cout<<ans<<"\n";
    return 0;
}

