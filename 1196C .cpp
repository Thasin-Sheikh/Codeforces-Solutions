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
ll x[N],y[N],a[N],b[N],c[N],d[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;

    ll xsum=0,ysum=0;
    ll mx=INT_MAX,mx1=-100000,my=INT_MAX,my1=-100000;
    for(i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i]>>a[i]>>b[i]>>c[i]>>d[i];
        if(a[i]==0)
        {
            mx1=max(mx1,x[i]);
        }
        if(b[i]==0)
        {
            my=min(my,y[i]);
        }
        if(c[i]==0)
        {
            mx=min(mx,x[i]);
        }
        if(d[i]==0)
        {
            my1=max(my1,y[i]);
        }
    }
    if(mx1<=mx&&my1<=my)
    {
        cout<<1<<" "<<mx1<<" "<<my1<<"\n";
    }
    else cout<<0<<"\n";

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
