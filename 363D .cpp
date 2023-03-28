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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll k,m,n,l,sh;
vector<ll> bm,bir;
ll bs(ll h)
{
    ll j=0,i,cou=0;
    ll pr=sh;
    for(i=h-1; i>=0; i--)
    {
        if(bir[i]<=bm[j])
        {
            j++;
        }
        else
        {
            if(bm[j]+pr<bir[i])
            {
                return false;
            }
            else
            {
                ll p=abs(bm[j]-bir[i]);
                pr-=p;
                j++;
            }
        }
    }
    return true;
}
void solve()
{
    ll i,j,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m>>sh;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        bm.push_back(l);
    }
    for(i=1; i<=m; i++)
    {
        cin>>l;
        bir.push_back(l);
    }
    sort(bm.rbegin(),bm.rend());
    sort(bir.begin(),bir.end());
    l=0,r=min(n,m);
    ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(bs(mid))
        {
            ans=max(ans,mid);
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    for(i=0;i<ans;i++)
    {
        sum+=bir[i];
    }
    sum-=sh;
    sum=max(sum,0LL);
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


