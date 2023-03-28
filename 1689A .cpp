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
    ll i,j,k,m,n,l,r,q,p,sum=0,c,d;
    string str,a,b;
    bool yes=true;
    vector<char>a1,b1;
    cin>>n>>m>>k;
    cin>>a>>b;
    for(i=0; i<n; i++)
    {
        a1.push_back(a[i]);
    }
    for(i=0; i<m; i++)
    {
        b1.push_back(b[i]);
    }
    sort(a1.rbegin(),a1.rend());
    sort(b1.rbegin(),b1.rend());
    string ans;
    ll c1=0,c2=0;
    while(a1.size()&&b1.size())
    {
        char x,y;
        x=a1.back();
        y=b1.back();
        if(x<y)
        {
            if(c1<k)
            {
                ans+=x;
                a1.pop_back();
                c1++;
                c2=0;
            }
            else
            {
                ans+=y;
                b1.pop_back();
                c2++;
                c1=0;
            }
        }
        else
        {
            if(c2<k)
            {
                ans+=y;
                b1.pop_back();
                c2++;
                c1=0;

            }
            else
            {
                ans+=x;
                a1.pop_back();
                c1++;
                c2=0;
            }
        }


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

