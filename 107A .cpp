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
ll vis[N],vis2[N];
map<pair<ll,ll>,ll>mp;
vector<ll>v[10000];
map<ll,ll>in,out;
vector<pair<ll,pair<ll,ll>>>ans;
ll res=12345678,f=0,fin=0;
void dfs(ll n)
{
    vis[n]=1;
    for(ll i=0;i<v[n].size();i++)
    {
        ll nm=v[n][i];
        if(vis[nm]==0)
        {
            res=min(res,mp[{n,nm}]);
            if(in[nm]==1&&out[nm]==0)
            {
                f=1;
                fin=nm;
            }
            dfs(nm);
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
    ll i,j,n,m,p,k,t,a,b,d;
    cin>>n>>p;
    for(i=1; i<=p; i++)
    {
        cin>>a>>b>>d;
        v[a].push_back(b);
        v[b].push_back(a);
        in[b]++;
        out[a]++;
        mp[{a,b}]=d;
    }
    vector<ll>tank;
    for(i=1;i<=n;i++)
    {
        if(out[i]==1&&in[i]==0)
        {
            tank.push_back(i);
        }
    }
    for(i=0;i<tank.size();i++)
    {
        t=tank[i];
        f=0;
        res=12345678;
        dfs(t);
        if(f)
        {
            ans.push_back({t,{fin,res}});
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<'\n';
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<'\n';
    }
    return 0;
}




