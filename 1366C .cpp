///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
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
ll vis[N];
map<pair<ll,ll>,ll>mp;
ll dis[N][5];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    ll ma=0,mi=INT_MAX;
    vector<ll>v[n+m+5];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
            l=n-i+1;
            r=m-j+1;
            if(l+r==i+j)
            {
                continue;
            }
            k=min(i+j,l+r);
            ma=max(ma,k);
            mi=min(mi,k);
            v[k].push_back(magic[i][j]);
        }
    }
    ans=0;
    for(i=mi; i<=ma; i++)
    {
        ll o=0,z=0;
        if(v[i].size()==0)
        {
            continue;
        }
        for(j=0; j<v[i].size(); j++)
        {
            if(v[i][j]==1)
            {
                o++;
            }
            else z++;
        }
        ans+=min(o,z);
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        solve();
    }

    return 0;
}


