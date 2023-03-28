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
map<ll,vector<ll>>mp;
vector<pair<char,char>>vc;
ll cnt[30][30];
vector<ll>v[30];
vector<ll>ans[30];
vector<ll>fin;
ll inc;
void dfs(ll cur)
{
    ll i,j,k,l,r;
    vis[cur]=1;//cout<<cur<<endl;
    ans[inc].push_back(cur);
    for(i=0; i<v[cur].size(); i++)
    {
        k=v[cur][i];
        if(vis[k])
        {
            continue;
        }
        dfs(k);
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string a,b,str;
    bool yes=true;
    cin>>n;
    cin>>a>>b;
    for(i=0; i<n; i++)
    {
        l=a[i]-'a';
        r=b[i]-'a';
        v[l].push_back(r);
        v[r].push_back(l);
    }
    for(i=0; i<n; i++)
    {
        k=a[i]-'a';
        //cout<<k<<endl;
        if(vis[k]==0)
        {
            inc++;
            dfs(k);
        }
    }
    //cout<<inc<<endl;
    //cout<<ans[inc].size()<<endl;
    for(i=1; i<=inc; i++)
    {
        sum+=ans[i].size()-1;
    }
    cout<<sum<<"\n";
    for(i=1; i<=inc; i++)
    {

        for(j=1; j<ans[i].size(); j++)
        {
            cout<<char(ans[i][0]+'a')<<" "<<char(ans[i][j]+'a')<<"\n";
        }
    }

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

