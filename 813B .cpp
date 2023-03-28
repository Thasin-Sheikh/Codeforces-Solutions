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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll x,y;
    cin>>x>>y>>l>>r;
    for(i=1;; i*=x)
    {
        for(j=1;; j*=y)
        {
            if(i+j<=r&&i+j>=l)
            {
                v.push_back(i+j);
            }
            if(j>r/y)
            {
                break;
            }
        }
        if(i>r/x)
        {
            break;
        }
    }
    v.push_back(l-1);
    v.push_back(r+1);
    sort(v.begin(),v.end());
    //v.push_back(INT_MAX);
    ll c=0;
    ans=0;
    for(i=1; i<v.size(); i++)
    {
        ans=max(v[i]-v[i-1]-1,ans);
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


