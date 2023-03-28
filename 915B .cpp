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
const long MAXN=5e5+10;
int aarray[N];
int magic[R][R];
vector<ll>primes;
bool check[1000001];
int large[10000005];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll p;
    cin>>n>>p>>l>>r;
    if(l==1&&r==n)
    {
        cout<<0<<endl;
        return ;
    }
    if(p<=l)
    {
        ans=(l-p);
        if(l!=1)
        {
            ans++;
        }
        if(r<n)
        {
            ans+=(r-l);
            ans++;
        }
    }
    else if(p>=r)
    {
        ans=(p-r);
        if(l>1)
        {
            ans+=(r-l)+1;
        }
        if(r<n)
        {
            ans++;
        }
    }
    else
    {
        ll d1,d2;
        d1=r-p;
        d2=p-l;
        if(l==1)
        {
            ans=(r-p)+1;
        }
        else if(r==n)
        {
            ans=(p-l)+1;
        }
        else if(d1<d2&&r!=n)
        {
            ans=(r-p)+1;
            if(l!=1)
            {
                ans+=r-l+1;
            }
        }
        else
        {
            ans=(p-l)+1;
            if(r!=n)
            {
                ans+=(r-l)+1;
            }
        }
    }
    cout<<ans<<endl;
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


