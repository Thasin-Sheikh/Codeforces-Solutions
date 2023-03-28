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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    ll x1,x2,y1,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>n;
    cin>>str;
    ll u=0;
    r=0;
    for(i=0; i<n; i++)
    {
        if(str[i]=='L')
        {
            r--;
        }
        else if(str[i]=='R')
        {
            r++;
        }
        else if(str[i]=='U')
        {
            u++;
        }
        else u--;
    }
    if(x1==x2&&y1==y2)
    {
        cout<<0<<"\n";
        return ;
    }
    ll s=1,e=1e18;
    ans=1e18;
    while(s<=e)
    {
        m=(s+e)/2;
        ll curu=u,curr=r;
        d=m/n;
        curu*=d;
        curr*=d;
        ll rem=m%n;
        for(i=0; i<rem; i++)
        {
            if(str[i]=='L')
            {
                curr--;
            }
            else if(str[i]=='R')
            {
                curr++;
            }
            else if(str[i]=='U')
            {
                curu++;
            }
            else curu--;

        }
        a=abs((x1+curr)-x2);
        b=abs((y1+curu)-y2);
        if(a+b<=m)
        {
            e=m-1;
            ans=m;
        }
        else s=m+1;
    }
    if(ans==1e18)
    {
        cout<<-1<<"\n";
    }
    else cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

