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
const long MAXN=5e5+10;
int aarray[300010];
ll magic[R][R];
vector<ll>primes;
bool check[15000001];
ll large[10000005];
ll vis[N];
int mp[15000000];
void solve()
{
    int i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    int g=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        g=__gcd(g,aarray[i]);
    }
    for(i=1; i<=n; i++)
    {
        aarray[i]/=g;
        mp[aarray[i]]++;
    }
    ans=INT_MAX;
    for(i=2; i<=15000000; i++)
    {
        if(check[i])
            continue;
        m=0;
        for(j=i; j<=15000000; j+=i)
        {
            m+=mp[j];
            check[j]=true;
        }
        ans=min(ans,n-m);
    }
    //cout<<ans<<endl;
    if(ans>=n)
        cout<<-1<<"\n";
    else

        cout<<ans<<"\n";
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


