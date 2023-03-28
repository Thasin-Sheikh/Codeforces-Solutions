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
ll n;
string str;
ll zero[N],one[N];
void solve()
{
    ll i,j,k,m,l,r,q,ans,sum=0;
    bool yes=true;
    cin>>n;
    cin>>str;
    vector<ll>v;
    ans=0;
    mp[0]=-1;
    ll o=0,z=0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            z++;
        }
        else o++;
        if(mp.count(o-z))
        {
            ans=max(ans,i-mp[o-z]);
        }
        else
        {
            mp[o-z]=i;
        }
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


