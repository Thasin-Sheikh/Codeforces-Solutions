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
ll vis[200];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min

void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,c,d;
    string str;
    bool yes=true;
    vector<ll>v,va;
    vector<pair<ll,ll>>ans;
    cin>>n;
    ll a[n+1],b[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    for(i=0; i<n; i++)
    {
        cin>>b[i];
        va.push_back(b[i]);
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        if(v[i]==a[i])
        {
            continue;
        }
        for(j=i+1; j<n; j++)
        {
            if(v[j]==a[i])
            {
                swap(v[i],v[j]);
                swap(b[i],b[j]);
                ans.push_back({i,j});
                break;
            }

        }
    }
    sum=0;
    for(i=1; i<n; i++)
    {
        if(b[i]<b[i-1])
        {
            sum++;
        }
    }
    if(sum==0)
    {
        cout<<ans.size()<<"\n";
        for(i=0; i<ans.size(); i++)
        {
            cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
        }
        return ;
    }
    sort(va.begin(),va.end());
    for(i=0;i<va.size();i++)
    {
        if(va[i]==b[i])
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(b[j]==va[i])
            {
                swap(b[i],b[j]);
                swap(v[i],v[j]);
                ans.push_back({i,j});
                break;

            }
        }
    }
    sum=0;
    for(i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            sum++;
        }
        if(va[i]<va[i-1])
        {
            sum++;
        }
    }
    if(sum)
    {
        cout<<-1<<"\n";
        return ;
    }
    cout<<ans.size()<<"\n";
        for(i=0; i<ans.size(); i++)
        {
            cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
        }
        return ;
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

