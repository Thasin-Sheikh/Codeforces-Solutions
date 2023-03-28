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
ll a[400000+100],b[400000+100];
ll ina[400000+100],inb[400000+100];
ll fact[4000000];
unsigned long long power(unsigned long long x,int y, int p)
{
    unsigned long long res = 1;
    x = x % p;
    while (y > 0)
    {

        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

unsigned long long modInverse(unsigned long long n,int p)
{
    return power(n, p - 2, p);
}

unsigned long long nCr(unsigned long long n,int r, int p)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;

    return (fact[n] * modInverse(fact[r], p) % p * modInverse(fact[n - r], p) % p)% p;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        ina[a[i]]=i;
        vis[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
        inb[b[i]]=i;
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            p=i;
            ll c=1;
            //cout<<i<<endl;
            while(vis[p]==0)
            {
                vis[p]=1;
                //cout<<p<<" ";
                //vis[b[p]]=1;
                if(c%2)
                {
                    p=ina[b[p]];
                }
                else
                {
                    p=ina[b[p]];
                }
                c++;
            }
            //cout<<endl;
            sum++;
        }
    }
    ans=0;
    //cout<<sum<<endl;
    for(i=1; i<=sum; i++)
    {
        ans+=nCr(sum,i,MOD);
        ans%=MOD;
    }
    ans+=1;
    ans%=MOD;
    ans+=MOD;
    ans%=MOD;
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
    fact[0]=fact[1]=1;
    for(i=2; i<=400000; i++)
    {
        fact[i]=(fact[i-1]*i)%MOD;
    }
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

