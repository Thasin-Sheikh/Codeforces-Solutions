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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
vector<ll>v;
ll bs(ll in)
{
    ll i,j,k,l;
    in--;
    vector<ll>a,b;
    for(i=0;i<v.size();i++)
    {
        if(i<=in)
        {
            a.push_back(v[i]);
        }
        else
        {
            b.push_back(v[i]);
        }
    }
    while(a.size())
    {
        if(b.back()<2*a.back())
        {
            return false;
        }
        a.pop_back();
        b.pop_back();
    }
    return true;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        v.push_back(l);
    }
    ans=0;
    l=0,r=n/2;
    sort(v.begin(),v.end());
    while(l<=r)
    {
        m=(l+r)/2;
        if(bs(m))
        {
            ans=max(ans,m);
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    ans=n-ans;
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

