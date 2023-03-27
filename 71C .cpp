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
ll n;
bool dhur(ll x)
{

    ll i,j,k;
    bool check[n+10];
    for(i=1;i<=n;i++)
    {
        check[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        ll cnt=0;
        if(check[i])
        {
            return false;
        }
        for(j=i;j<=n;j+=x)
        {
            cnt+=aarray[j];
            check[j]=1;
        }
        if(cnt==n/x)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    ll i,j,k,m,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        if(aarray[i])
        {
            sum++;
        }
    }
    if(sum==n)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    p=n;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n/i>=3&&dhur(i))
            {
                cout<<"YES"<<"\n";
                return;
            }
            l=n/i;
            if(n/l>=3&&dhur(l))
            {
                cout<<"YES"<<"\n";
                return ;
            }
        }
    }
    cout<<"NO"<<"\n";
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
