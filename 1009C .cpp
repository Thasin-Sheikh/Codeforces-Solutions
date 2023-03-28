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
    ll i,j,k,m,n,l,r,q,ans;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    ll sum=0;
    ll a,b;
    while(m--)
    {
        cin>>l>>r;
        sum+=n*l;
        k=n-1;
        if(r>=0)
        {
            sum+=(r*((k*(k+1))/2)*1.0);
        }
        else
        {
            a=n/2;
            if(n%2)
            {
                sum+=(1.0*2*r*((a*(a+1))/2));
            }
            else
            {
                sum+=(1.0*r*((a*(a+1))/2));
                sum+=(1.0*r*((a*(a-1))/2));
            }
        }

    }
    dl aa=dl(sum)/(n*1.0);
    cout<<setprecision(15)<<aa<<"\n";
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
