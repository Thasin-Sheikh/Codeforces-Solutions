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
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
vector<ll>v;
ll k;
ll ok(ll n)
{
    ll sum=0,i,c=0,p=0;
    for(i=0;i<v.size();i++)
    {
        sum+=max(0LL,v[i]-p);
        c++;
        if(c%n==0)
        {
            p++;
        }
    }
    if(sum>=k)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        v.push_back(l);
        sum+=l;
    }
    if(sum<k)
    {
        cout<<-1<<"\n";
        return ;
    }
    sort(v.rbegin(),v.rend());
    l=1,r=n;
    ans=INT_MAX;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(ok(mid))
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else
        {
            l=mid+1;
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
