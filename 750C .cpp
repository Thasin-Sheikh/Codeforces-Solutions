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
ll c[N],d[N];
ll n;
ll aa=0;
ll bs(ll vl)
{
    ll i,j,k;
    aa=vl;
    for(i=1; i<=n; i++)
    {
        if(vl<=1899&&d[i]==1)
        {
            return false;
        }
        if(vl>=1900&&d[i]==2)
        {
            return false;
        }
        if(c[i]<0)
        {
            vl-=abs(c[i]);
        }
        else
            vl+=c[i];
        //cout<<i<<" "<<vl<<endl;
    }
    aa=vl;
    return true;

}
void solve()
{
    ll i,j,k,m,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll ds=0,dt=0;
    l=INT_MIN,r=INT_MAX;
    for(i=1; i<=n; i++)
    {
        cin>>c[i]>>d[i];
    }
    for(i=1; i<=n; i++)
    {
        if(d[i]==1)
        {
            l=max(l,1900LL);
        }
        else
            r=min(r,1899LL);
        l+=c[i];
        r+=c[i];
        if(l>r)
        {
            cout<<"Impossible"<<"\n";
            return ;
        }
    }
    if(r>INT_MAX/2)
    {
        cout<<"Infinity"<<"\n";
    }
    else
    {
        cout<<r<<"\n";
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
