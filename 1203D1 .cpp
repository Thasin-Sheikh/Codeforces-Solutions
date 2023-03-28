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
ll n,ts;
string str,s,t;
ll ok(ll i)
{
    ll j,k;
    for(j=0; j<=n-i; j++)
    {
        string a;
        a=s;
        a.erase(j,i);
        ll ii=0;
        for(k=0; k<a.size();k++)
        {
            if(a[k]==t[ii])
            {
                ii++;
            }
        }
        if(ii==ts)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    ll i,j,k,m,l,r,q,ans=0,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>s>>t;
    if(s==t)
    {
        cout<<0<<"\n";
        return ;
    }
    ll baki=s.size()-t.size();
    n=s.size();
    ts=t.size();
    l=1,r=baki;
    while(l<=r)
    {
        ll mid=(l+r+1)/2;
        if(ok(mid))
        {
            ans=max(ans,mid);
            l=mid+1;
        }
        else
        {
            r=mid-1;
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
