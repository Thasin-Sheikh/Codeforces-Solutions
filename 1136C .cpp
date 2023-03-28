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
ll A[505][505],B[505][505];
vector<ll>v[2000],c[2000];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>a,b;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>l;
            v[i+j].push_back(l);
        }
    }
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>l;
            c[i+j].push_back(l);

        }
    }
    for(i=2;i<=n+m;i++)
    {
        sort(v[i].begin(),v[i].end());
        sort(c[i].begin(),c[i].end());
        if(v[i]!=c[i])
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    cout<<"YES"<<"\n";
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

