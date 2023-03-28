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
vector<ll>v[N];
vector<ll>node;
void dfs(ll n)
{
    node.push_back(n);
    vis[n]=1;
    for(ll i=0;i<v[n].size();i++)
    {
        if(vis[v[n][i]])
        {
            continue;
        }
        dfs(v[n][i]);
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            node.clear();
            dfs(i);
            if(node.size()>2)
            {
                ans++;
                for(j=0;j<node.size();j++)
                {
                    if(v[node[j]].size()!=2)
                    {
                        ans--;
                        break;
                    }
                }
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}
