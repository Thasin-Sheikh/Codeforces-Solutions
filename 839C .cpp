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
vector<ll>v[N];
ll dis[N];
dl ans[N];
dl dfs(ll node)
{
    vis[node]=1;
    dl sum=0;
    ll sz=0;
    for(ll i=0;i<v[node].size();i++)
    {
        ll k=v[node][i];
        if(vis[k]==0)
        {
            sum+=1+dfs(k);
            sz++;
        }
    }
    if(sz==0)
    {
        return 0;
    }
    return dl(sum)/sz;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }

    cout<<setprecision(15)<<dfs(1)<<endl;
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


