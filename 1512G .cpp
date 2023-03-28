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
int  aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
int sum[10000002];
int ans[10000002];
void  seive()
{
    ll i,j;
    for(i=1;i<=10000000;i++)
    {
        for(j=i;j<=10000000;j+=i)
        {
            sum[j]+=i;
        }
        if(sum[i]<=10000000)
        {
            if(ans[sum[i]]==0)
            {
                ans[sum[i]]=i;
            }
        }
    }

}
void solve()
{
    ll i,j,k,m,n,l,r,q;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    if(ans[n]==0)
    {
        cout<<-1<<"\n";
    }
    else cout<<ans[n]<<"\n";

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    seive();
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


