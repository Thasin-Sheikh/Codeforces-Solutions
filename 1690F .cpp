///*Bismillahir Rahmanir Rahim***///
///**Author thasin_sheikh**///
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
typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
  vector<pair<char,ll>>vc;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v,ans;
    cin>>n;
    cin>>str;
    for(i=0; i<n; i++)
    {
        cin>>aarray[i];
        vis[i+1]=0;
    }
    ll lcm=1;
    string sc=str;
    string sc1=sc;
    for(i=0; i<n; i++)
    {
        //cout<<i<<endl;
        if(i+1==aarray[i])
        {
            continue;
        }
        if(vis[i+1])
        {
            continue;
        }
        a=i+1;
        v.clear();
        while(vis[a]==0)
        {
            vis[a]++;
            v.push_back(a);
            a=aarray[a-1];
        }
        vector<pair<ll,ll>>vp;
        for(auto it:v)
        {
            vp.push_back({it,aarray[it-1]});
        }
    c=0;
        while(1)
        {
            c++;
            for(auto it:vp)
            {
                sc[it.first-1]=sc1[it.second-1];
            }
            sc1=sc;
            if(sc==str)
            {
                break;
            }
        }
        if(c)
        {
            lcm=(lcm*c)/(__gcd(lcm,c));
        }
    }

    cout<<lcm<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

