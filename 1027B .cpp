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
    cin>>n>>m;
    ll c;
    ll d=((n*n)+1)/2;
    while(m--)
    {
        cin>>r>>c;
        sum=r+c;
        if(n%2==0)
        {
            l=r-1;
            l*=(n/2);
            if(sum%2)
            {
                l+=(d+((c+1)/2));
                cout<<l<<"\n";

            }
            else
            {
                l+=(c+1)/2;
                cout<<l<<"\n";
            }
        }
        else
        {
            l=r-1;
            k=l/2;
            q=k;
            if(l%2)
            {
                k++;
            }
            if(sum%2)
            {
                q*=(n+1)/2;
                k*=n/2;
                c=(c+1)/2;
                ans=q+k+c+d;
                cout<<ans<<"\n";
            }
            else
            {
                q*=n/2;
                k*=(n+1)/2;
                c=(c+1)/2;
                ans=k+q+c;
                cout<<ans<<"\n";

            }
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


