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
ll fist,secnd;
vector<ll>f,s,v;
ll to1,to2;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        f.push_back(l);
    }
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>r;
        s.push_back(r);
    }
    sort(f.begin(),f.end());
    sort(s.begin(),s.end());
    ll dif=-1e18;
    ll a,b;
    for(i=0; i<=n; i++)
    {
        if(i==0)
        {
            ll num=f[0]-1;
            l=n*3;
            r=upper_bound(s.begin(),s.end(),num)-s.begin();
            k=r*2+(m-r)*3;
            //cout<<k<<endl;
            ll d=l-k;
            if(d>dif)
            {
                a=l;
                b=k;
                dif=d;
            }
            else if(d==dif&&l>a)
            {
                a=l;
                b=k;
            }
        }
        else if(i==n)
        {
            l=n*2;
            r=m*2;
            ll d=l-r;
            if(d>dif)
            {
                dif=d;
                a=l;
                b=r;
            }
            else if(d==dif&&l>a)
            {
                a=l;
                b=r;
            }

        }
        else
        {
            ll num=f[i]-1;
            l=i*2;
            l+=(n-i)*3;
            r=upper_bound(s.begin(),s.end(),num)-s.begin();
            k=r*2+(m-r)*3;
            ll d=l-k;
            if(d>dif)
            {
                a=l;
                b=k;
                dif=d;
            }
            else if(d==dif&&l>a)
            {
                a=l;
                b=k;

            }

        }
        //cout<<i<<" "<<a<<" "<<b<<endl;
    }
    cout<<a<<":"<<b<<"\n";
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
