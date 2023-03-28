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
bool check[100010];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
void seive()
{
    ll i,j,k,l;
    for(i=1; i<=100001; i++)
    {
        check[i]=true;
    }
    check[0]=false;
    for(i=2; i<=100000; i++)
    {
        if(check[i])
        {
            for(j=2*i; j<=100000; j+=i)
            {
                check[j]=false;
            }
        }
    }

}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v,a;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        if(l%2)
        {
            v.push_back(l);
        }
        else
        {
            a.push_back(l);
        }
    }
    for(i=0;i<v.size();i++)
    {
        a.push_back(v[i]);
    }
    ans=0;
    for(i=0; i<a.size(); i++)
    {
        for(j=i+1; j<a.size(); j++)
        {
            ll g=__gcd(a[i],2*a[j]);
            if(g>1)
            {
                ans++;
            }
        }

    }
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
    //seive();
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
