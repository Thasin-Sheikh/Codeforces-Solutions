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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
ll cnt[N];
ll ans[N];
ll col[N];
ll lcnt[N];
vector<ll>flag[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        flag[i].clear();
        ans[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        //ans[i]=0;
        cin>>aarray[i];
        flag[aarray[i]].push_back(i);
    }
    for(i=1;i<=n;i++)
    {
        if(flag[i].size()>=k)
        {
            ll cl=1;
            for(j=0;j<k;j++)
            {
                ans[flag[i][j]]=cl;
                cl++;
            }
        }
        else
        {
            for(j=0;j<flag[i].size();j++)
            {
                v.push_back(flag[i][j]);
            }
        }
    }
    ll ex=ll(v.size())%k;
    ll cl=1;
    for(i=0;i<v.size()-ex;i++)
    {
        ans[v[i]]=cl;
        cl++;
        if(cl>k)
        cl=1;
    }
    for(i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}