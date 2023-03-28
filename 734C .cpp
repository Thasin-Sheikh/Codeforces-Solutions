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
vector<pair<ll,ll>>p1,p2;
ll a[N],b[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,x,s,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>c,d;
    cin>>n>>m>>k;
    cin>>x>>s;
    ans=x*n;
    a[0]=x;
    for(i=1; i<=m; i++)
    {
        cin>>l;
        a[i]=l;
    }
    b[0]=0;
    for(i=1; i<=m; i++)
    {
        cin>>l;
        if(l<=s)
            ans=min(ans,a[i]*n);
        b[i]=l;
    }
    for(i=1; i<=k; i++)
    {
        cin>>l;
        c.push_back(l);
    }
    for(i=1; i<=k; i++)
    {
        cin>>l;
        if(l<=s&&c[i-1]>=n)
        {
            ans=0;
        }
        d.push_back(l);
    }
    //cout<<ans<<endl;
    for(i=0; i<=m; i++)
    {
        k=s-b[i];
        l=upper_bound(d.begin(),d.end(),k)-d.begin();
        //cout<<l<<" "<<k<<endl;
        if(s<b[i])
        {
            continue;
        }

            l--;
            if(l>=0){
            p=n-c[l];
            ans=min(ans,max(0LL,p*a[i]));}

        //cout<<i<<" "<<ans<<endl;
    }
    cout<<ans<<"\n";
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

