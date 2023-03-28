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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    mp.clear();
    for(i=1; i<=m; i++)
    {
        cin>>l;
        a=l;
        c=0;
        while(a)
        {
            a/=2;
            c++;
        }
        mp[c-1]++;
        v.push_back(l);
        sum+=l;
    }
    if(sum<n)
    {
        cout<<-1<<"\n";
        return ;
    }
    sum=0;
    ans=0;
    vector<ll>nai;
    for(i=0; i<=62; i++)
    {
        if(n&(1LL<<i))
        {
            if(!mp[i])
            {
                nai.push_back(i);
            }
            else
            {
                mp[i]--;
                mp[i+1]+=mp[i]/2;

            }

        }
        else
        {
            mp[i+1]+=mp[i]/2;

        }
    }
    //cout<<(nai.size())<<endl;
    for(i=0; i<nai.size(); i++)
    {
        k=nai[i];
        k=(1LL<<k);
        for(j=nai[i]; j<=62; j++)
        {

            if(mp[j])
            {
                mp[j]--;
                p=(1LL<<j);
                while(p!=k)
                {
                    p/=2;
                    a=p;
                    c=0;
                    while(a)
                    {
                        a/=2;
                        c++;
                    }
                    mp[c-1]++;
                    ans++;
                }
                break;
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
    //no test case in interactive ,check it idiot
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

