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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll cat[N];
ll n,m;
ll val[N];
vector<ll>v[N];
ll ans=0;
void dfs(ll nn)
{
    vis[nn]=-1;
    ll c=0;
    for(ll i=0; i<v[nn].size(); i++)
    {
        ll k=v[nn][i];
        if(vis[k]==0)
        {
            if(cat[k]==0&&val[nn]!=INT_MAX)
            {
                val[k]=0;
            }
            else
            {
                val[k]=val[nn]+1;
            }
            //cout<<k<<" "<<val[k]<<endl;
            if(val[k]>m)
            {
                val[k]=INT_MAX;
            }
            if(v[k].size()==1)
            {
                //cout<<k<<" "<<nn<<endl;
                //cout<<val[nn]<<endl;
                if(val[k]<=m)
                {
                    ans++;
                }

            }
            else
            {
                dfs(k);
            }
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,k,t,a,b;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>cat[i];
    }
    for(i=1; i<=n-1; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
     val[1]=cat[1];
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }
    cout<<ans<<"\n";
    return 0;
}

