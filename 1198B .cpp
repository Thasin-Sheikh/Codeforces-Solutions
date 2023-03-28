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
ll type[N],citizen[N],money[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        vis[i]=-1;
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>type[i];
        if(type[i]==1)
        {
            cin>>citizen[i]>>money[i];
        }
        else
        {
            cin>>money[i];
        }
    }
    ll mx=0;
    for(i=m;i>=1;i--)
    {
        if(type[i]==1)
        {
            if(vis[citizen[i]]==-1)
            {
                vis[citizen[i]]=max(mx,money[i]);
            }
        }
        else
        {
            mx=max(mx,money[i]);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==-1)
        {
            vis[i]=max(mx,aarray[i]);
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<vis[i]<<" ";
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


