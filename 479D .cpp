///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using myset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
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
const long long  maxval=1e18;
const long long minval=-1e18;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp,pp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    ll x,y;
    cin>>n>>l>>x>>y;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
    }
    if(mp[x]&&mp[y])
    {
        cout<<0<<"\n";
        return ;
    }
    ll bsum=0;
    for(i=1;i<=n;i++)
    {
        if(aarray[i]==x)
        {
            sum++;
        }
        if(aarray[i]==y)
        {
            bsum++;
        }
        if(mp[aarray[i]+x])
        {
            sum++;
        }
        if(mp[aarray[i]+y])
        {
            bsum++;
        }
    }
    if(sum&&bsum)
    {
        cout<<0<<"\n";
        return ;
    }
    else if(sum||bsum)
    {
        cout<<1<<"\n";
        if(sum){cout<<y<<"\n";}
        else cout<<x<<"\n";
        return ;
    }
    mp.clear();
    for(i=1;i<=n;i++)
    {
        if(aarray[i]-x>=0)
        {
            mp[aarray[i]-x]++;
        }
        if(aarray[i]-y>=0)
        {
            pp[aarray[i]-y]++;
        }
        if(aarray[i]+x<=l)
        {
            mp[aarray[i]+x]++;
        }
        if(aarray[i]+y<=l)
        {
            pp[aarray[i]+y]++;
        }
    }
    for(auto it:mp)
    {
        if(pp[it.first])
        {
            cout<<1<<"\n";
            cout<<it.first<<"\n";
            return ;
        }
    }
    cout<<2<<"\n";
    cout<<x<<" "<<y<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
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

