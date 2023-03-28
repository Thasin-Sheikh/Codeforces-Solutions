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
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,x,n,l,r,q,p,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    cin>>n>>x;
    vector<ll>v(n+1,-1e18),ans(n+1,-1e18);
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    v[0]=0;
    for(i=1;i<=n;i++)
    {
        ll cur=0;
        for(j=i;j<=n;j++)
        {
            cur+=aarray[j];
            v[j-i+1]=max(cur,v[j-i+1]);
        }
    }
    for(k=0;k<=n;k++)
    {
        for(i=0;i<=n;i++)
        {
            ans[k]=max(ans[k],(min(k,i)*x+v[i]));
        }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<"\n";

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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

