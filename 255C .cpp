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
typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[1000000+5];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min

void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    set<ll>s1,s2;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        ed[aarray[i]].push_back(i);
        s1.insert(aarray[i]);
        s2.insert(aarray[i]);
    }
    ans=0;
    for(auto it=s1.begin(); it!=s1.end(); it++)
    {
        for(auto jt=s2.begin(); jt!=s2.end(); jt++)
        {
            a=*it;
            b=*jt;
            ll val=0;
            c=0;
            while(1)
            {
                l=lower_bound(ed[a].begin(),ed[a].end(),val+1)-ed[a].begin();
                if(l==ed[a].size())
                {
                    break;
                }
                c++;
                val=ed[a][l];
                r=lower_bound(ed[b].begin(),ed[b].end(),val+1)-ed[b].begin();
                if(r==ed[b].size())
                {
                    break;
                }
                c++;
                val=ed[b][r];
            }
            ans=max(ans,c);

        }
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

