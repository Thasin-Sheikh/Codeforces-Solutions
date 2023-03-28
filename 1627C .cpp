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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<pair<ll,ll>,ll>mp;
vector<ll>ed[N];
ll l[N],r[N];
ll su=0;
void dfs(ll node,ll val)
{
    vis[node]=1;
    if(ed[node].size()>2)
    {
        su++;
        return ;
    }
    for(ll i=0; i<ed[node].size(); i++)
    {
        ll k=ed[node][i];
        if(vis[k])
        {
            continue;
        }
        if(ed[k].size()>2)
        {
            //cout<<k<<endl;
            su++;
            return ;
        }
        mp[{node,k}]=val;
        if(val==2)
        {
            val=3;
        }
        else val=2;
        dfs(k,val);
    }

}
void solve()
{
    ll i,j,k,m,n,q,p,ans,sum=0,a,b,c,d;
    string str;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        ed[i].clear();
    }
    mp.clear();
    su=0;
    for(i=1; i<n; i++)
    {
        cin>>l[i]>>r[i];
        ed[l[i]].push_back(r[i]);
        ed[r[i]].push_back(l[i]);
        vis[i]=0;
    }
    vis[n]=0;
    if(ed[1].size()>2)
    {
        cout<<-1<<"\n";
        return ;
    }
    if(ed[1].size()==1)
    {
        dfs(1,2);
    }
    else
    {
        vis[1]=1;
        mp[{1,ed[1][0]}]=2;
        dfs(ed[1][0],3);
        mp[{1,ed[1][1]}]=3;
        dfs(ed[1][1],2);
    }
    //cout<<su<<"\n";

    if(su)
    {
        cout<<-1<<"\n";
        return ;
    }
    for(i=1; i<n; i++)
    {
        if(mp[ {l[i],r[i]}])
            cout<<mp[ {l[i],r[i]}]<<" ";
        else
        {
            cout<<mp[ {r[i],l[i]}]<<" ";

        }
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

