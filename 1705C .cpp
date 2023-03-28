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
//map<ll,char>mp;
//priority_queue<ll>pq;// from max to min
char mp[8500000];
void solve()
{
    ll i,j,k,m,n,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>c>>q;
    cin>>str;
    ll l[c+1],r[c+1];

    for(i=1; i<=c; i++)
    {
        cin>>l[i]>>r[i];
    }
    while(q--)
    {
        cin>>k;
        vector<pair<ll,ll>>vp;
        sum=n;
        ll pre=sum;
        for(i=1; i<=c; i++)
        {
            sum+=r[i]-l[i]+1;
            vp.push_back({pre+1,sum});
            if(sum>=k)
            {
                j=i;
                break;
            }
            pre=sum;
        }
        //cout<<j<<"\n";
        /*for(i=0;i<3;i++)
        {
            cout<<vp[i].first<<" "<<vp[i].second<<"\n";
        }*/
        ll f=0;
        for(;j>=1;j--)
        {
            //cout<<j<<" "<<k<<"\n";
           // cout<<k<<"\n";
            a=vp[j-1].first;
            b=vp[j-1].second;
            //cout<<k<<" "<<a<<" "<<b<<" "<<j<<"\n";
            if(k>=a)
            {
                //cout<<j<<"\n";
                a=vp[j-1].second-k;
                k=r[j]-a;
            }
        }
        cout<<str[k-1]<<"\n";
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
