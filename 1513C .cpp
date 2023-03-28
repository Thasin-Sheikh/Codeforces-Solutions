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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
ll a[11], save[200100],b[11];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>str>>m;
    n=str.size();
    for(i=0;i<n;i++)
    {
        k=str[i]-'0';
        sum+=save[m+k];
        sum%=MOD;

    }
    cout<<sum<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
    makefast__
    string str;
    ll i,j,n,m,k,t;
    a[0]=1;
    for(i=1; i<=200100; i++)
    {
        b[0]=a[9]%MOD;
        b[1]=(a[0]%MOD+a[9]%MOD)%MOD;
        b[2]=a[1]%MOD;
        b[3]=a[2]%MOD;
        b[4]=a[3]%MOD;
        b[5]=a[4]%MOD;
        b[6]=a[5]%MOD;
        b[7]=a[6]%MOD;
        b[8]=a[7]%MOD;
        b[9]=a[8]%MOD;
        ll to=0;
        for(j=0;j<10;j++)
        {
            a[j]=b[j];
            to+=a[j];
            to%=MOD;
        }
        save[i]=to%MOD;
    }
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

