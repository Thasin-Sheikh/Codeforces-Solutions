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
ll S,n;
ll ok(ll m)
{
    ll sum=0;
    ll i;
    vector<ll>v;
    for(i=1;i<=n;i++)
    {
        v.push_back(aarray[i]+i*m);
    }
    sort(v.begin(),v.end());
    for(i=0;i<m;i++)
    {
        sum+=v[i];
    }
    if(sum<=S)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,k,m,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>S;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    l=0,r=n;
    ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        //cout<<mid<<endl;
        if(ok(mid))
        {
            ans=max(ans,mid);
            l=mid+1;
        }
        else r=mid-1;

    }
    for(i=1;i<=n;i++)
    {
        v.push_back(aarray[i]+i*ans);
    }
    sort(v.begin(),v.end());
    for(i=0;i<ans;i++)
    {
        sum+=v[i];
    }
    cout<<ans<<" "<<sum<<"\n";
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
