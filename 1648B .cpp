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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
 ll cnt[1000000+10];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v,nai;
    cin>>n>>c;
    for(i=1;i<=c;i++)
    {
        cnt[i]=0;
    }
    m=0;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        cnt[l]=1;
        m=max(m,l);
    }
    sort(v.begin(),v.end());
    if(cnt[1]==0)
    {
        cout<<"No"<<"\n";
        return ;
    }
    for(i=1;i<=m;i++)
    {
        if(cnt[i]==0)
        {
            nai.push_back(i);
        }
        else
        {
            v.push_back(i);
        }
    }
    for(i=0;i<nai.size();i++)
    {
        for(j=0;j<v.size();j++)
        {
            if(v[j]==1)
            {
                continue;
            }
            p=v[j]*nai[i];
            if(p>c)
            {
                break;
            }
            l=lower_bound(v.begin(),v.end(),p)-v.begin();
            if(l==(ll)v.size())
            {
                continue;
            }
            else if((v[l]/v[j])==nai[i])
            {
                cout<<"No"<<"\n";
                return ;
            }
        }
    }
    cout<<"Yes"<<"\n";
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

