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
vector<ll>s[26];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    n=str.size();
    ll cnt[n+1];
    for(i=0; i<n; i++)
    {
        cnt[i]=0;
    }
    for(i=0; i<26; i++)
    {
        s[i].clear();
    }
    for(i=0; i<str.size(); i++)
    {
        s[str[i]-'a'].push_back(i);
    }
    for(i=0; i<26; i++)
    {
        if(v[i].size())
        {
            sort(v[i].begin(),v[i].end());
        }
    }
    ans=0;
    for(i=0; i<n; )
    {
        if(cnt[i])
        {
            i++;
            continue;
        }
        if(str[i]==str[i+1])
        {
            i++;
            continue;
        }
        if(i==n-1)
        {
            i++;
            ans++;
        }
        else
        {
            l=str[i]-'a';
            r=str[i+1]-'a';
            l=upper_bound(v[l].begin(),v[l],end(),i)-v[l].begin();
            r=upper_bound(v[r].begin(),v[r],end(),i+1)-v[r].begin();
            if(l==v[l].size()&&r==v[r].size())
            {
                ans+=2;
                i+=2;
            }
            else if(r==v[r].size())
            {
                ans++;
                ans+=(l-i-1);
                i+=2;
            }
            else if(l==v[l].size())
            {
                ans++;
                i++;
            }
        }
    }
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

