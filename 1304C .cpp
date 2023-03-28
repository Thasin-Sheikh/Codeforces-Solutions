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
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
ll ti[N],l[N],r[N];
void solve()
{
    ll i,j,k,m,n,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll now;
    cin>>n>>now;
    ll mn=now,mx=now;
    for(i=1;i<=n;i++)
    {
        cin>>ti[i]>>l[i]>>r[i];
    }
    k=0;
    for(i=1;i<=n;i++)
    {
         ll d=abs(k-ti[i]);
        if(mx+d<l[i]||mn-d>r[i])
        {
            cout<<"NO"<<"\n";
            return ;
        }
        k=ti[i];
        mx=min(mx+d,r[i]);
        mn=max(mn-d,l[i]);
    }
    cout<<"YES"<<"\n";
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
