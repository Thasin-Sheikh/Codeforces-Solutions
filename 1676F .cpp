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
//bool check[1000001];
//ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min

void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    mp.clear();
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
        if(mp[aarray[i]]>=k)
        {
            sum++;
        }
    }
    for(auto it:mp)
    {
        if(it.second>=k)
        {
            v.push_back(it.first);
        }
    }
    if(sum==0)
    {
        cout<<-1<<"\n";
        return ;
    }
    l=v[0];
    ll ma=1;
    c=1;
    ans=l;
    ll prec=1;
    /*  for(i=0;i<v.size();i++)
      {
          cout<<v[i]<<" ";
      }*/
    for(i=1; i<v.size(); i++)
    {
        if(v[i]==v[i-1]+1)
        {
            c++;
        }
        else
        {
            if(c>prec)
            {
                prec=c;
                ans=l;
            }
            l=v[i];
            c=1;

        }
        if(i==v.size()-1)
        {
            if(c>prec)
            {
                prec=c;
                ans=l;
            }

        }
    }
   // cout<<ans<<" "<<prec<<"\n";
    cout<<ans<<" "<<ans+prec-1<<"\n";
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

