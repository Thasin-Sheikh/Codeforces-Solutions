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
vector<ll>r[15];
ll len[N];
void solve()
{
    ll i,j,k,m,n,l,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        ll x;
        x=aarray[i];
        while(x)
        {
            len[i]++;
            x/=10;
        }
        r[len[i]].push_back(aarray[i]%m);
    }
    for(i=1; i<=10; i++)
    {
        if(r[i].size()==0)
            continue;
        sort(r[i].begin(),r[i].end());
    }
    ans=0;
        vis[1]=10;
    for(i=2;i<=10;i++)
    {
        vis[i]=(vis[i-1]*10)%m;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=10; j++)
        {
            if(r[j].size()==0)
            {
                continue;
            }
            ll pw=((aarray[i]%m)*vis[j])%m;
            l=m-pw;
            l%=m;
            ll f=lower_bound(r[j].begin(),r[j].end(),l)-r[j].begin();
            ll e=upper_bound(r[j].begin(),r[j].end(),l)-r[j].begin();
            ans+=e-f;
            if(len[i]==j&&(pw+aarray[i]%m)%m==0)
            {
                ans--;

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
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
