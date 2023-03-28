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
    ll w;
    cin>>n>>w;
    vector<ll>c(30);
    for(i=1; i<=n; i++)
    {
        cin>>l;
        c[log2(l)]++;

    }
    ans=1;
    ll space=w;
    for(i=1; i<=n; i++)
    {
        l=-1;
        for(j=20; j>=0; j--)
        {
            if(c[j]&&1<<j<=space)
            {
                l=j;
                break;
            }
        }
        if(l==-1)
        {
            ans++;
            space=w;
            for(j=20; j>=0; j--)
            {
                if(c[j]&&1<<j<=space)
                {
                    l=j;
                    break;
                }
            }
        }
        c[l]--;
        space-=(1<<l);
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


