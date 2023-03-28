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
ll totsum[N],parsum[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>aarray[i];
        if(i==0)
            totsum[i]=aarray[i];
        else
        totsum[i]=aarray[i]+totsum[i-1];
    }
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='1')
        {
            sum+=aarray[i];
        }
    }
    //cout<<sum<<endl;
    for(i=n-1;i>=0;i--)
    {
        if(str[i]=='1')
        {
            parsum[i]=parsum[i+1]+aarray[i];
        }
        else
        {
            parsum[i]=parsum[i+1];
        }
    }
    ans=sum;
    for(i=n-1;i>0;i--)
    {
        k=0;
        if(str[i]=='1')
        {
            k=parsum[i+1]+totsum[i-1];
        }
        ans=max(ans,k);
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
