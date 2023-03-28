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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m>>k;
    if(k<n)
    {
        cout<<k+1<<" "<<1<<"\n";
        return ;
    }
    ll p=(n+m)-2;
    if(k==p)
    {
        cout<<n<<" "<<m<<"\n";
        return ;
    }
    if(k<p)
    {
        k-=(n-1);
        cout<<n<<" "<<k+1<<"\n";
        return ;
    }
    k-=p;
    l=k/(m-1);
    r=k%(m-1);
    if(r==0)
    {
        if(l%2)
        {
            cout<<n-l<<" "<<2<<"\n";
        }
        else
        {
            cout<<n-l<<" "<<m<<"\n";
        }
    }
    else
    {
        if(l%2)
        {
            cout<<n-l-1<<" "<<r+1<<"\n";
        }
        else
        {
            cout<<n-l-1<<" "<<m-r+1<<"\n";
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


