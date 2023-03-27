///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
ll ncr(ll n,ll r)
{
    ll p,k;
    p=1,k=1;
    if(n-r<r)
    {
        r=n-r;
    }
    if(r==0)
        return 1;
    while(r)
    {
        p*=n;
        k*=r;
        ll g=__gcd(p,k);
        p/=g,k/=g;
        n--;
        r--;
    }
    return p;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    ll b,g,tot;
    cin>>b>>g>>tot;
    ull ans=0;
    for(i=4;i<=b;i++)
    {
        for(j=1;j<=g;j++)
        {
            if(i+j==tot)
            {
                ans+=ll(ncr(b,i))*ll(ncr(g,j));
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}


