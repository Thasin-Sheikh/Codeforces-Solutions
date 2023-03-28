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
    string str[200];
    bool yes=true;
    vector<pair<ll,ll>>v,vc;
    cin>>n>>m;
    char ch[n+1][m+1],chcopy[n+1][m+1];
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            ch[i][j]=str[i][j-1];
            chcopy[i][j]=ch[i][j];
        }

    }
    if(ch[1][1]=='1')
    {
        cout<<-1<<"\n";
        return ;
    }
    for(i=n; i>=1; i--)
    {
        for(j=m; j>=1; j--)
        {
            if(ch[i][j]=='1')
            {
                if(j==1)
                {
                    v.push_back({i-1,j});
                    vc.push_back({i,j});
                }
                else
                {
                    v.push_back({i,j-1});
                    vc.push_back({i,j});

                }
            }

        }
    }
    cout<<v.size()<<"\n";
    for(i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" "<<vc[i].first<<" "<<vc[i].second<<"\n";
    }
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

