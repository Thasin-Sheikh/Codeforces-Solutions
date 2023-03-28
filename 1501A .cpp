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
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll s[n+1],e[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>s[i]>>e[i];
    }
    ans=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    ll pre=aarray[1]+s[1],now=0;
    ll d;
    if(n==1)
    {
        cout<<s[1]+aarray[1]<<"\n";
        return ;
    }
    d=e[1]-s[1];
    l=d/2;
    if(d%2)
    {
        l++;
    }
    if(pre+l<=e[1])
    {
        pre=e[1];
    }
    else
    {
        pre+=l;
    }
    ll carce=pre;
    //cout<<carce<<endl;
    for(i=2; i<n; i++)
    {
        carce+=aarray[i];
        carce+=s[i]-e[i-1];
        d=e[i]-s[i];
        l=d/2;
        if(d%2)
        {
            l++;
        }
        carce=max(e[i],carce+l);
    }
    //cout<<carce<<"\n";
    carce+=(s[n]-e[n-1]);
    carce+=aarray[n];
    cout<<carce<<"\n";
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


