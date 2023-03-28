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
vector<ll>v[N];
void solve()
{
    ll i,j,k[200],m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    ll f[200];
    cin>>n>>m;
    ll ma=0;
    for(i=1; i<=m; i++)
    {
        cin>>k[i]>>f[i];
    }
    ll tot=0;
    set<ll>s;
    for(i=1; i<=100; i++)
    {
        ll p=0;
        for(j=1; j<=m; j++)
        {
            l=k[j];
            r=l/i;
            if(l%i)
                r++;
            if(r==f[j])
            {
                p++;

            }
        }
        if(p==m)
        {
            ans=n/i;
            if(n%i)
            {
                ans++;
            }
            s.insert(ans);
        }
    }
    if(s.size()==1)
    {
        cout<<*s.begin()<<"\n";
    }
    else cout<<-1<<"\n";
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

