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
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    sum=INT_MAX;
    ll in=-1;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        if(aarray[i]<sum)
        {
            sum=aarray[i];
            in=i;
        }
    }
    if(in!=1)
    {
        cout<<n<<"\n";
        cout<<1<<" "<<in<<" "<<sum<<" "<<sum+1<<"\n";
        for(i=2; i<=n; i++)
        {
            if(i%2==0)
            {
                cout<<1<<" "<<i<<" "<<sum<<" "<<sum+1<<"\n";
            }
            else
            {
                cout<<1<<" "<<i<<" "<<sum<<" "<<sum<<"\n";
            }
        }
    }
    else
    {
        cout<<n-1<<"\n";
        for(i=2; i<=n; i++)
        {
            if(i%2==0)
            {
                cout<<1<<" "<<i<<" "<<sum<<" "<<sum+1<<"\n";
            }
            else
            {
                cout<<1<<" "<<i<<" "<<sum<<" "<<sum<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


