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
ll x[N],v[N];
ll n;
dl ma1,mi1;
ll bs(dl h)
{
   dl mi=1000000000000000000.0;
   dl ma=-1000000000000000000.0;
    for(ll i=1;i<=n;i++)
    {
        if(h<v[i])
        {
            return false;
        }
        dl a=x[i]-(h-v[i]);
        dl b=x[i]+(h-v[i]);
        ma=max(ma,a);
        mi=min(mi,b);
    }
    //cout<<h<<" "<<ma<<" "<<mi<<"\n";
    if(ma-mi<=0)
    {
        ma1=ma;
        mi1=mi;
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,k,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    dl m,l=0,r=100000000000000;
    for(i=1;i<=500;i++)
    {
        m=(l+r)/2;
        if(bs(m))
        {
            r=m-1;
        }
        else l=m+1;
    }
    cout<<setprecision(15)<<(ma1+mi1)/2<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


