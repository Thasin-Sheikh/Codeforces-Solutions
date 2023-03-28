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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll x1,y1,x2,y2,w,h,W,H;
    cin>>W>>H;
    cin>>x1>>y1>>x2>>y2;
    cin>>w>>h;
    if(x1>=w)
    {
        cout<<0<<"\n";
        return ;
    }
    if(W-x2>=w)
    {
        cout<<0<<"\n";
        return ;
    }
    if(h<=y1)
    {
        cout<<0<<"\n";
        return ;
    }
    if(H-y2>=h)
    {
        cout<<0<<"\n";
        return ;
    }
    ans=INT_MAX;
    ll d=w-x1;
    if(x2+d<=W)
    {
        ans=min(ans,d);
    }
    ll rf=W-x2;
    d=w-rf;
    if(x1-d>=0)
    {
        ans=min(ans,d);
    }
    ll uh=H-y2;
    d=h-uh;
    if(y1-d>=0)
    {
        ans=min(ans,d);
    }
    ll dh=y1;
    d=h-dh;
    if(y2+d<=H)
    {
        ans=min(ans,d);
    }
    if(ans==INT_MAX)
    {
        cout<<-1<<"\n";
    }
    else cout<<ans<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

