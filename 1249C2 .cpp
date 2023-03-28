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
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    m=n;
    for(i=0; i<=40; i++)
    {
        vis[i]=0;
    }
    for(i=40; i>=1; i--)
    {
        if(aarray[i]<=n)
        {
            n-=aarray[i];
            vis[i]=1;
        }
    }
    if(n==0)
    {
        cout<<m<<"\n";
        return ;
    }
    ans=0;
    for(i=1;i<=40;i++)
    {
        if(aarray[i]>=n&&vis[i]==0)
        {
            vis[i]=1;
            for(j=i;j<=40;j++)
            {
                if(vis[j])
                {
                    ans+=aarray[j];
                }
            }
            cout<<ans<<"\n";
            return ;
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
    cin>>t;
    ll pro=1;
    for(i=1; i<=40; i++)
    {
        aarray[i]=pro;
        pro*=3;
    }
    while(t--)
    {
        solve();
    }
    return 0;
}
