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
ll v[N];
map<ll,ll>mp;
ll place[N],n;
ll bs(dl t)
{
    ll i,j;
    vector<pair<ll,ll>>vp;
    dl mi=100000000000.0;
    dl ma=-100000000000.0;
    for(i=1; i<=n; i++)
    {
        dl a,b;
        a=dl(place[i])-dl(v[i]*t);
        b=dl(place[i])+dl(v[i]*t);
        ma=max(ma,a);
        mi=min(mi,b);
    }
    if(ma-mi<=0)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,k,m,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>place[i];
    for(i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    dl l=0,r=1000000000000000000;
    ll tm=500;
    while(tm--)
    {
        dl mid=(l+r)/2;
        // cout<<setprecision(10)<<mid<<endl;
        if(bs(mid))
        {
            r=mid;
        }
        else
            l=mid;
        //cout<<tm<<" "<<l<<" "<<r<<endl;
    }
    dl aa=(l+r)/2;
    cout<<setprecision(15)<<aa<<"\n";
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
