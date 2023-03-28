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
ll b[N],c[1000000+10];
vector<pair<ll,ll>>targetindex,calc;
pair<ll,ll>a[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    ans=INT_MAX;
    ll pre=INT_MAX;
    sum=0;
    ll presum=0;
    ll ti=-1;
    sort(a+1,a+n+1);
    for(i=n; i>=1; i--)
    {
        if(a[i].first>=pre)
        {
            sum++;
            continue;
        }
        if(ti!=-1&&sum-presum!=0)
        {
            //cout<<i<<" "<<sum-presum<<endl;
            targetindex.push_back({ti,sum-presum});
            presum=sum;
        }
        ti=i;
        pre=max(0LL,a[i].first-a[i].second);
    }
    if(n==1||targetindex.size()==0)
    {
        cout<<0<<"\n";
        return ;
    }
    ans=min(ans,sum);
    ll sz=targetindex.size();
    if(sz>1)
    {
        for(i=1;i<sz;i++)
        {
            targetindex[i].second+=targetindex[i-1].second;
        }
    }
    ll now=0;
    for(i=n;i>=1;i--)
    {
        k=targetindex.back().first;
        if(k==i)
        {
            now++;
            sum=now;
            if(targetindex.size()>1)
            {
                ll sz=targetindex.size();
                sz-=2;
                sum+=targetindex[sz].second;

            }
            ans=min(ans,sum);
            targetindex.pop_back();
        }
        else
        {
            now++;
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
