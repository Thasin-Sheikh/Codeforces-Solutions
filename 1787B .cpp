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
//int dx[] = {-1 , 0 , 1 , 0};
//int dy[] = {0 , 1 , 0 , -1};
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>prm,po,v;
    multiset<ll>ms;
    cin>>n;
      p=n;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            c=0;
            while(n%i==0)
            {
                n/=i;
                c++;


            }
            prm.push_back({c,i});

        }
    }
    if(n>1)
    {
        prm.push_back({1,n});


    }
    ll flag;
    sort(prm.begin(),prm.end());
    //cout<<prm.size()<<"\n";
    p=1;
    for(i=0;i<prm.size();i++)
    {
        p*=prm[i].second;

    }

    if(prm.size()==1)
    {
        cout<<prm[0].first*prm[0].second<<"\n";
        return ;
    }
    ans=0;
    ll pre=0;
    for(i=0;i<prm.size();i++)
    {
        prm[i].first-=pre;
        ans+=max(0LL,prm[i].first)*p;
        p/=prm[i].second;
        pre+=prm[i].first;
    }
    cout<<ans<<"\n";
    //cout<<"\n";
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




