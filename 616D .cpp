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
const long NM = 5e5 + 10;
ll aarray[NM];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll m,n;
ll li,ri;
ll cnt[1000000+10];
ll bs(ll h)
{
    for(ll i=0;i<=1000001;i++)
        cnt[i]=0;
    ll ne=0;
    for(ll i=1; i<=h; i++)
    {
        cnt[aarray[i]]++;
        if(cnt[aarray[i]]==1)
        {
            ne++;
        }
    }
    if(ne<=m)
    {
        li=1;
        ri=h;
        return true;
    }
    for(ll i=h+1; i<=n; i++)
    {
        cnt[aarray[i-h]]--;
        if(cnt[aarray[i-h]]==0)
        {
            ne--;
        }
        cnt[aarray[i]]++;
        if(cnt[aarray[i]]==1)
        {
            ne++;
        }
        if(ne<=m)
        {
            ri=i;
            li=ri-h+1;
            return true;
        }
    }
    return false;
}
void solve()
{
    ll i,j,k,q,l,r,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin >>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    l=1;
    r=n;
    ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(bs(mid))
        {
            l=mid+1;
         //   ans=max(ans,mid);
        }
        else r=mid-1;
    }
    cout<<li<<" "<<ri<<"\n";
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


