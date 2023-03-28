///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 998244353
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
    string a,b;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    cin>>a>>b;
    ll sa=0,sb=0;
    reverse(b.begin(),b.end());
    while(b.size()<a.size())
    {
        b+='0';
    }
    reverse(b.begin(),b.end());
    reverse(a.begin(),a.end());
    while(a.size()<b.size())
    {
        a+='0';
    }
    reverse(a.begin(),a.end());
    k=max(n,m);
    //cout<<a<<" "<<b<<" "<<k<<endl;
    ll pro=1;
    for(i=k-1; i>=0; i--)
    {
        if(a[i]=='1')
        {
            l=(k+1)-(i+1);
            //cout<<i<<" "<<sum<<endl;
            aarray[i]=pro;
        }
        else
        {
            aarray[i]=0;

        }
        pro*=2;
        pro%=MOD;
    }
    for(i=k-1; i>=0; i--)
    {
        aarray[i]+=aarray[i+1];
        aarray[i]%=MOD;
    }
    ans=0;
    for(i=0; i<k; i++)
    {
        if(b[i]=='1')
        {
            ans+=aarray[i];
            ans%=MOD;
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
