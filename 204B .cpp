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
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp,f,b;
void solve()
{
    ll i,j,k,m,n,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll l[n+5],r[n+5];
    for(i=1;i<=n;i++)
    {
        cin>>l[i]>>r[i];
        f[l[i]]++;
        if(l[i]!=r[i])
        {
            b[r[i]]++;
        }
    }
    ll e=n/2;
    if(n%2)
    {
        e++;
    }
    ans=INT_MAX;
    for(i=1;i<=n;i++)
    {
        q=f[l[i]];
        if(q>=e)
        {
            cout<<0<<"\n";
            return;
        }
        ll ex=b[l[i]];
        if(q+ex>=e)
        {
            ans=min(ans,e-q);
        }
    }
    if(ans==INT_MAX)
    {
        for(i=1;i<=n;i++)
        {
            if(b[r[i]]>=e)
            {
                ans=e;
                break;
            }
        }
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


