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
stack<ll>st;
vector<pair<ll,ll>>ans;
ll curnode=1;
ll diameter=0;
ll vv[1000];
ll n;
ll flag[1000];
void solve()
{
    ll i,j,k,m,l,r,q,p,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>one,notone;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        if(l==1)
            one.push_back({l,i});
        else notone.push_back({l,i}),vis[i]=l;
        sum+=l;
    }
    if(sum<2*n-2)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    diameter=(ll)notone.size()-1+min(2LL,(ll)one.size());
    for(i=0; i<(ll)notone.size()-1; i++)
    {
        ans.push_back({notone[i].second,notone[i+1].second});
        vis[notone[i].second]--;
        vis[notone[i+1].second]--;

    }
    if(one.size())
    {
        ans.push_back({notone.back().second,one.back().second});
        vis[notone.back().second]--;
        one.pop_back();
    }
    for(i=0;i<notone.size();i++)
    {
        k=notone[i].second;
        p=vis[k];
        while(p&&one.size())
        {
            ans.push_back({k,one.back().second});
            one.pop_back();
            p--;
        }
    }
    cout<<"YES"<<" "<<diameter<<"\n";
    cout<<ans.size()<<"\n";
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

