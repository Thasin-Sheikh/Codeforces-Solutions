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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
ll ans[N][40];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>l>>r;
    q=INT_MAX;
    for(i=0;i<32;i++)
    {
        sum=ans[r][i]-ans[l-1][i];
        q=min(q,sum);
    }
    cout<<q<<"\n";
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
    for(i=0;i<32;i++)
    {
        for(j=1;j<=200000;j++)
        {
            ans[j][i]=ans[j-1][i];
            if(!((1LL<<i)&j))
            {
                ans[j][i]++;
            }
        }
    }
    while(t--)
    {
        solve();
    }

    return 0;
}

