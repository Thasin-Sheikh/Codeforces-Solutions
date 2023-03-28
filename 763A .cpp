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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
vector<ll>v[N];
ll col[N];
set<ll>dif;
bool aa=true;
void bfs(ll node,ll cal)
{
    vis[node]=1;
    //cout<<2<<node<<endl;
    // cout<<node<<" "<<cal<<endl;
    //cout<<node<<" "<<cal<<endl;
    for(ll i=0; i<v[node].size(); i++)
    {
        ll k=v[node][i];
        //cout<<node<<" "<<k<<endl;
        if(vis[k]==1)
        {
            //cout<<k<<endl;
            continue;
        }
        if(col[k]!=cal)
        {
            //cout<<cal<<" "<<k<<endl;
            aa=false;
            return ;
        }
        //cout<<k<<endl;
        bfs(k,cal);
    }
    //cout<<node<<" "<<col[node]<<" "<<cal<<" "<<3<<endl;
}
ll dfs(ll no,ll cnt)
{
    ll i,j,k;
    //cout<<1<<no<<endl;
    // cout<<no<<endl;
    for(i=0; i<v[no].size(); i++)
    {
        k=v[no][i];
        //cout<<k<<endl;
        aa=true;
        bfs(k,col[k]);
        if(aa==true)
        {
            cnt++;
        }
    }
   // cout<<cnt<<" "<<" "<<no<<" "<<v[no].size()<<endl;
    if(cnt==v[no].size())
    {
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1; i<n; i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    for(i=1; i<=n; i++)
    {
        cin>>col[i];
        dif.insert(col[i]);
    }
    if(dif.size()==1)
    {
        cout<<"YES"<<"\n";
        cout<<1<<"\n";
        return ;
    }
    ll a,b;
    for(i=1; i<=n; i++)
    {
        for(auto g:v[i])
        {
            if(col[g]!=col[i])
            {
                a=i;
                b=g;
            }

        }
    }
    //cout<<a<<" "<<b<<endl;
    vis[a]=1;
    //cout<<a<<" "<<b<<endl;
    if(dfs(a,0LL))
    {
        cout<<"YES"<<"\n";
        cout<<a<<"\n";
        return ;
    }
    for(i=1; i<=n; i++)
    {
        vis[i]=0;
    }
    vis[b]=1;
    if(dfs(b,0LL))
    {
        cout<<"YES"<<"\n";
        cout<<b<<"\n";
        return ;
    }
    cout<<"NO"<<"\n";
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
