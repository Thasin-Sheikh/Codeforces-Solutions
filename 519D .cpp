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
vector<ll>ed[30];
map<ll,ll>mp;
ll favsum[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    for(i=0;i<26;i++)
    {
        cin>>aarray[i];
    }
    cin>>str;
    n=str.size();
    for(i=0;i<n;i++)
    {
        ed[str[i]-'a'].push_back(i+1);
    }
    for(i=0;i<n;i++)
    {
        sum+=aarray[str[i]-'a'];
        favsum[i+1]=sum;
    }
    ans=0;
    for(i=0;i<26;i++)
    {
        if(ed[i].size()<2)
        {
            continue;
        }
        mp.clear();
        //cout<<1<<endl;
        for(j=0;j<ed[i].size();j++)
        {
            //cout<<i<<" "<<ed[i][j]<<" "<<favsum[ed[i][j]]<<" "<<mp[favsum[ed[i][j]]]<<"\n";
            ans+=mp[favsum[ed[i][j]-1]];
            mp[favsum[ed[i][j]]]++;

        }
     //   cout<<2<<endl;
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
