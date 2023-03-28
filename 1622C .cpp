///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
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
map<ll,ll>mp;
vector<ll>v;
ll c;
ll sum=0;
ll n;
void solve()
{
    ll i,j,k,m,l,r,q,p,ans,a,b,d;
    string str;
    bool yes=true;
    cin>>n>>c;
    v.clear();
    sum=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
        v.push_back(aarray[i]);
    }
    if(sum<=c)
    {
        cout<<0<<"\n";
        return ;
    }
    sort(v.begin(),v.end());
    aarray[0]=0;
    for(i=0; i<v.size(); i++)
    {
        aarray[i+1]=aarray[i]+v[i];
    }
    l=0;
    r=100000000000000;
    ans=r;
    for(i=0;i<n;i++)
    {
        ll cur=i;
        sum=aarray[n-i]+v[0]*i;
        if(sum>c)
        {
            a=sum-c;
            cur+=a/(i+1);
            if(a%(i+1))
            {
                cur++;
            }

        }
        ans=min(ans,cur);
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

