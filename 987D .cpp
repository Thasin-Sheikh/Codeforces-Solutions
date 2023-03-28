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
ll ans[100005][105];
vector<ll>col[300];
vector<ll>v[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    ll s;
    cin>>n>>m>>k>>s;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        col[l].push_back(i);
    }
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=k; j++)
        {
            ans[i][j]=INT_MAX;
        }
    }
    for(i=1; i<=m; i++)
    {
        cin>>l>>r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    for(i=1; i<=k; i++)
    {
        queue<ll>pq;
        for(j=0; j<col[i].size(); j++)
        {
            pq.push(col[i][j]);
            ans[col[i][j]][i]=0;
        }
        while(pq.size())
        {
            ll kk=pq.front();
            pq.pop();
            for(auto g:v[kk])
            {
                if(ans[g][i]!=INT_MAX)
                {
                    continue;
                }
                if(ans[kk][i]+1<=ans[g][i])
                {
                    ans[g][i]=ans[kk][i]+1;
                    pq.push(g);
                }
            }
            //cout<<pq.size()<<endl;
        }
    }
    for(i=1;i<=n;i++)
    {
        nth_element(ans[i]+1,ans[i]+s+1,ans[i]+k+1);
        sum=0;
        for(j=1;j<=s;j++)
        {
            sum+=ans[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<"\n";
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
