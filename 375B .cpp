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
string str[10000];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    bool yes=true;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>str[i];
    }
    ans=0;
    vector<ll>v(n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(str[j][i]=='1')
            {
                v[j]++;
            }
            else
            {
                v[j]=0;
            }
        }
        auto cur=v;
        sort(cur.rbegin(),cur.rend());
        cout<<i<<"\n";
        for(auto it:cur)
        {
            cout<<it<<" ";
        }
        cout<<'\n';
        for(j=0;j<n;j++)
        {
            ans=max(ans,cur[j]*(j+1));
        }
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}
