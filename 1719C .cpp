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

void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>q;
    deque<ll>dq;
    ll cnt[n+1];
    ll pcnt[n+1];
    ll ans[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>a;
        aarray[i]=a;
        dq.push_back(a);
        pcnt[i]=-1;
        ans[i]=0;
        cnt[a]=i;
    }
    c=0;
    while(1)
    {
        a=dq.front();
        dq.pop_front();
        b=dq.front();
        dq.pop_front();
        if(a==n)
        {
            break;
        }
        else
        {
            c++;
            if(a>b)
            {
                ans[cnt[a]]++;
                if(pcnt[cnt[a]]==-1)
                {
                    pcnt[cnt[a]]=c;
                }
                dq.push_front(a);
                dq.push_back(b);
            }
            else
            {
                ans[cnt[b]]++;
                if(pcnt[cnt[b]]==-1)
                {
                    pcnt[cnt[b]]=c;
                }
                dq.push_front(b);
                dq.push_back(a);

            }
        }
    }
    //cout<<c<<"\n";
    while(q--)
    {
        cin>>a>>b;
        if(aarray[a]!=n)
        {
            if(pcnt[a]==-1)
            {
                cout<<0<<"\n";
            }
            else
            {
                cout<<max(0LL,min(b-pcnt[a]+1,ans[a]))<<"\n";
            }

        }
        else
        {
            if(b<c)
            {
                cout<<0<<"\n";
            }
            else
            {
                cout<<ans[a]+b-c<<"\n";
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



