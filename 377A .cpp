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
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
char magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<pair<ll,ll>,ll>mp,pp;
queue<pair<ll,ll>>q;
vector<pair<ll,ll>>v;
ll n,m,k,c=0;
void bfs()
{
    while(1)
    {
        pair<ll,ll>x=q.front();
        q.pop();
        v.push_back({x.first,x.second});
        if(v.size()==c)
        {
            break;
        }
        mp[{x.first,x.second}]++;
        if(x.first+1<=n)
        {
            if(magic[x.first+1][x.second]=='.'&&mp[ {x.first+1,x.second}]==0)
            {
                q.push({x.first+1,x.second});
                mp[{x.first+1,x.second}]++;
            }
        }
        if(x.second+1<=m)
        {
            if(magic[x.first][x.second+1]=='.'&&mp[ {x.first,x.second+1}]==0)
            {
                q.push({x.first,x.second+1});
                mp[{x.first,x.second+1}]++;
            }
        }

        if(x.first-1>=1)
        {
            if(magic[x.first-1][x.second]=='.'&&mp[{x.first-1,x.second}]==0)
            {
                q.push({x.first-1,x.second});
                mp[{x.first-1,x.second}]++;
            }
        }
        if(x.second-1>=1)
        {
            if(magic[x.first][x.second-1]=='.'&&mp[ {x.first,x.second-1}]==0)
            {
                q.push({x.first,x.second-1});
                mp[{x.first,x.second-1}]++;
            }

        }
    }

}
void solve()
{
    ll i,j,l,r,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m>>k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
            if(magic[i][j]=='.'&&sum==0)
            {
                sum++;
                q.push({i,j});
            }
            if(magic[i][j]=='.')
            {
                c++;
            }
        }
    }
    l=c;
    c-=k;
    bfs();
    for(i=0;i<v.size();i++)
    {
        pp[{v[i].first,v[i].second}]++;
        //cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    //cout<<l<<" "<<c<<" "<<v.size()<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(pp[{i,j}]==0&&magic[i][j]=='.')
            {
                cout<<'X';
            }
            else cout<<magic[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
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
