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
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            magic[i][j]=0;
        }
    }
    l=1,r=1;
    if(k%n==0)
    {
        cout<<0<<"\n";
    }
    else cout<<2<<"\n";
    while(k--)
    {
        magic[l][r]=1;
        l++,r++;
        r%=(n+1);
        if(r==0)
        {
            r=1;
        }
        if(l==n+1)
        {
            l=1,r++;
            r%=(n+1);
        }

    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<magic[i][j];
        }
        cout<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
