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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
string s;
ll n;
void solve()
{
    ll i,j,k,l,r,ans,sum=0;
    cin>>s;
    n=s.length();
    l=0,r=n+1;
    vector<ll>v;
    for(i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            v.push_back(i+1);
        }
    }
    v.push_back(n+1);
    l=0;
    ans=0;
    for(i=0;i<v.size();i++)
    {
        k=v[i]-l;
        l=v[i];
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
    ll i,j,m,k,t;
    cin>>t;
    while(t--)
    {

        solve();
    }
    return 0;
}

