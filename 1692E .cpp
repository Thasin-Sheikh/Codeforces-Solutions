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
ll cnt[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    deque<ll>dq;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        aarray[i]=l;
        sum+=l;
        cnt[i]=0;

    }
    if(sum==k)
    {
        cout<<0<<"\n";
        return;
    }
    if(sum<k)
    {
        cout<<-1<<"\n";
        return ;
    }
    ll tot=sum;
    ans=0;
    sum=0;
    for(i=n; i>=1; i--)
    {
        if(aarray[i]==1)
        {
            sum++;
            cnt[sum]=i;
    //        cout<<sum<<" "<<i<<"\n";
        }
    }
    sum=0;
    ans=maxval;
    for(i=1; i<=n; i++)
    {
        sum+=aarray[i];
        if(tot-sum==k)
        {
            ans=min(ans,i);
            break;
        }
    }
    sum=0;
    //cout<<ans<<"\n";
    for(i=n; i>=1; i--)
    {
        sum+=aarray[i];
        if(tot-sum==k)
        {
            ans=min(ans,n-i+1);
            break;
        }
    }
   // cout<<ans<<"\n";
    ll ex=k-sum;
    sum=0;
    //cnt[0]=n+1;
    for(i=1; i<=n; i++)
    {
        sum+=aarray[i];
        d=tot-sum-k;
        if(d==0)
        {
            ans=min(ans,i);
        }
        else if(d<0)
        {
            continue;
        }else{
        d=cnt[d];
        ans=min(ans,i+n-d+1);}
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

