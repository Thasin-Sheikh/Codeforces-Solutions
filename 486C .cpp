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
typedef tree<ll ,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min

void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str,sc;
    bool yes=true;
    vector<ll>v;
    cin>>n>>p;
    cin>>str;
    sc=str;
    reverse(sc.begin(),sc.end());
    if(sc==str)
    {
        cout<<0<<"\n";
        return ;
    }

    p--;
    if(p>=n/2)
    {
        reverse(str.begin(),str.end());
        p=n-p-1;
    }
    l=n+1,r=-1;
    for(i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            l=min(l,i);
            r=max(i,r);
        }
    }
   // cout<<p<<" "<<l<<" "<<r<<endl;
    if(p<=l)
    {
        ans=r-p;
    }
    else if(p>=r)
    {
        ans=abs(p-l);
    }
    else
    {
        ans=min((abs(p-l)+abs(l-r)),abs(p-r)+abs(r-l));
    }
    ll e;
   // cout<<ans<<"\n";
    for(i=l;i<=r;i++)
    {
        a=str[i]-'a';
        b=str[n-i-1]-'a';
        c=abs(a-b);
        d=abs(0-a)+1+abs(25-b);
        e=abs(25-a)+1+abs(0-b);
       // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n";
        ans+=min({c,d,e});


    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
    //add and subtract

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

