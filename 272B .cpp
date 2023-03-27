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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,b,n,m,k,t,ans=0;
    cin>>n;
    j=0,b=0;
    /*for(i=1;i<=n;i++)
    {
        cin>>m;
        t=__builtin_popcount(m);
        mp[t]++;
    }
    for(i=1;i<=32;i++)
    {
        ans+=(mp[i]*(mp[i]-1))/2;
    }
    cout<<ans<<"\n";*/
    cout<<floor(log2(n))+1;

    return 0;
}




