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
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    ll a[n+1],b[n+1];

    for(i=0;i<n/2;i++)
    {
        a[i]=i;
        b[i]=(i^(n-1));
    }
    if(k==0)
    {
        for(i=0;i<n/2;i++)
        {
            cout<<a[i]<<" "<<b[i]<<"\n";
        }
        return ;
    }
    else if(k==n-1)
    {
        if(n==4)
        {
            cout<<-1<<"\n";
            return ;
        }
        cout<<n-1<<" "<<n-2<<"\n";
        cout<<1<<" "<<n-3<<"\n";
        cout<<0<<" "<<2<<"\n";
        for(i=3;i<n/2;i++)
        {
            cout<<a[i]<<" "<<b[i]<<"\n";
        }
    }
    else
    {
        cout<<k<<" "<<n-1<<"\n";
        ll cur=0;
        for(i=1;i<n/2;i++)
        {
            if(i!=k&&b[i]!=k)
            {
                cout<<a[i]<<" "<<b[i]<<"\n";
            }
            else if(cur==0)
            {
                cur++;
                if(i==k)
                {
                    cout<<0<<" "<<b[i]<<"\n";
                }
                else
                {
                    cout<<i<<" "<<0<<"\n";
                }
            }
        }
    }
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

