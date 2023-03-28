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
const long  N=3e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<pair<ll,ll>,ll>mp;
vector<ll>v[1000];
vector<ll>f;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    k=1<<(n+1);
    k--;
    for(i=2;i<=k;i++)
    {
        cin>>aarray[i];
    }
    ll ans=0;
    for(i=k;i>=1;i--)
    {
        ans+=abs(aarray[i*2]-aarray[i*2+1]);
        aarray[i]+=max(aarray[i*2],aarray[i*2+1]);
    }
    cout<<ans<<endl;
    return 0;
}




