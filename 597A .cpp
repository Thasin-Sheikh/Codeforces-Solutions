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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll a,b;
    cin>>k>>a>>b;
    ans=0;
    if(a==0&&b==0)
    {
        cout<<1<<"\n";
        return ;
    }
    if(a>=0&&b>=0)
    {
        r=b/k;
        if(a==0)
        {
            ans=r+1;
        }
        else
        {
            l=a/k;
            if(a%k==0)
            {
                l--;
            }
            ans=r-l;
        }
        cout<<ans<<"\n";
        return ;
    }
    if(a<=0&&b>=0)
    {
        if(a==0)
        {
            ans=1;
        }
        else
        {
            ans+=abs(a)/k+1;
        }
        if(b==0)
        {

        }
        else
        {
            ans+=b/k;
        }
        cout<<ans<<"\n";
        return ;
    }
    if(a<0&&b<=0)
    {
        r=abs(a/k);
        if(b==0)
        {
            ans=r+1;
            cout<<ans<<"\n";
            return ;
        }
        else
        {
            l=abs(b)/k;
            if(abs(b)%k==0)
            {
                l--;
            }
            cout<<r-l<<"\n";
            return ;
        }
    }
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
