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
ll magic[1005][1005];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll r[N],c[N];

void solve()
{
    ll i,j,k,m,n,l,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m>>q;
    for(i=1;i<=n;i++)
    {
        r[i]=i;
        for(j=1;j<=m;j++)
        {
            cin>>magic[i][j];
            c[j]=j;
        }
    }
    while(q--)
    {
        char ch;
        ll a,b;
        cin>>ch;
        cin>>a>>b;
        if(ch=='r')
        {
            swap(r[a],r[b]);

        }
        else if(ch=='c')
        {
            swap(c[a],c[b]);

        }
        else
        {
            cout<<magic[r[a]][c[b]]<<'\n';
        }
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


