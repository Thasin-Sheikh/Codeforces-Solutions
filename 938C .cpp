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
int aarray[N];
int magic[R][R];
vector<ll>primes;
bool check[1000001];
int large[10000005];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    if(n==0)
    {
        cout<<1<<" "<<1<<"\n";
        return ;
    }
    if(n==1)
    {
        cout<<-1<<"\n";
        return ;
    }
    ans=-1;
    l=1,r=1000000000;
    for(i=1; i<=sqrt(n)+10; i++)
    {
        ll l1=1,r1=i;
        while(l1<=r1)
        {
            ll m1=(l1+r1)/2;
            k=i/m1;
            k*=k;
            ll tot=i*i;
            ll zero=k+n;
            if(tot==zero)
            {
                cout<<i<<" "<<m1<<"\n";
                return ;
            }
            if(tot-k<n)
            {
                l1=m1+1;
            }
            else r1=m1-1;

        }
    }
    cout<<-1<<"\n";
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


