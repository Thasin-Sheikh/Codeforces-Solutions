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
ll width[N];
ll v1sum[200],v2sum[200];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v1,v2;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        if(a==1)
            v1.push_back(b);
        else
            v2.push_back(b);

    }
    sort(v1.rbegin(),v1.rend());
    sort(v2.rbegin(),v2.rend());
    for(i=(ll)v1.size()-1; i>=0; i--)
    {
        v1sum[i]=v1sum[i+1]+v1[i];
    }
    for(i=(ll)v2.size()-1; i>=0; i--)
    {
        v2sum[i]=v2sum[i+1]+v2[i];
    }
    ans=100000;
    for(i=0; i<=v1.size(); i++)
    {
        a=i;
        b=v1sum[i];
        ll f=0;
        if(a>=b+v2sum[0])
        {
            ans=min(ans,i);

        }
        for(j=0; j<v2.size(); j++)
        {
            if((a+(j+1)*2)>=(v2sum[j+1]+b))
            {
                f=(j+1)*2;
                b+=v2sum[j+1];
                break;
            }
        }
       // cout<<i<<" "<<f<<" "<<b<<"\n";
        if(a+f>=b)
        {
            ans=min(ans,a+f);
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

