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
ll n;
ll ok(ll val)
{
    ll c=0;
    ll p=n;
    while(p)
    {
        ll mi=min(val,p);
        p-=mi;
        c+=mi;
        if(p>=10)
        {
            ll k=p/10;
            p-=k;
        }
        //cout<<p<<endl;
    }
    if(c*2>=n)
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
    cin>>n;
    l=1,r=n;
    ans=1000000000000000000;
    if(n==1)
    {
        cout<<n<<"\n";
        return ;
    }
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(ok(mid))
        {
            r=mid-1;
            //cout<<mid<<endl;
            ans=min(ans,mid);
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
