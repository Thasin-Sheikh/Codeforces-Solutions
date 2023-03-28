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
vector<ll>idex[3000];
ll cnt[3000];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    ll cng=0;
    for(i=1;i<=m;i++)
    {
        cnt[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        vis[i]=aarray[i];
        if(aarray[i]>m)
        {
            v.push_back(i);
        }
        else
        {
            cnt[aarray[i]]++;

        }
    }
    for(i=1;i<=n;i++)
    {
        if(aarray[i]<=m&&cnt[aarray[i]]>(n/m))
        {
            v.push_back(i);
            cnt[aarray[i]]--;
        }
    }
    /*for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }*/
    for(i=1;i<=m;i++)
    {
        while(cnt[i]<n/m)
        {
           // cout<<i<<" "<<endl;
            aarray[v.back()]=i;
            v.pop_back();
            cnt[i]++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(aarray[i]!=vis[i])
        {
            cng++;
        }
    }
    ll mi=INT_MAX;
    for(i=1;i<=m;i++)
    {
        mi=min(mi,cnt[i]);
    }
    cout<<mi<<" "<<cng<<"\n";
    for(i=1;i<=n;i++)
    {
        cout<<aarray[i]<<" ";
    }
    return;
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
