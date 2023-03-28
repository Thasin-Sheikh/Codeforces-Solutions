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
ll magic[50010][10];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>magic[i][j];
        }
    }
    ll curchamp=1;
    for(i=2; i<=n; i++)
    {
        ll cnt=0;
        for(j=1; j<=5; j++)
        {
            if(magic[i][j]>magic[curchamp][j])
            {
                cnt++;
            }
        }
        if(cnt<3)
        {
            curchamp=i;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(i==curchamp)
        {
            continue;
        }
        ll cnt=0;
        for(j=1; j<=5; j++)
        {
            if(magic[curchamp][j]<magic[i][j])
            {
                cnt++;
            }
        }
        if(cnt<3)
        {
            cout<<-1<<"\n";
            return ;
        }
    }
    cout<<curchamp<<"\n";
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

