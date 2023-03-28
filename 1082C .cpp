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
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
vector<ll>v[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>l>>r;
        v[l].push_back(r);

    }
    ll ma=0,mi=INT_MAX;
    for(i=1; i<=m; i++)
    {
        if(v[i].size())
        {
            sort(v[i].rbegin(),v[i].rend());
        }
    }
    vector<ll>ans(n+10,0);
    for(i=1;i<=m;i++)
    {
        sum=0;
        for(j=0;j<v[i].size();j++)
        {
            sum+=v[i][j];
            if(sum<0)
            {
                break;
            }
            ans[j]+=sum;
            ma=max(ma,ans[j]);
        }
    }
    cout<<ma<<"\n";
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


