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
string str;
ll p;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    str=to_string(n);
    ans=0;
    for(i=str.size()-1;i>=0;i--)
    {
        if(str[i]!='0')
        {
            ans++;
        }
        else
        {
            sum++;
        }
        if(sum==k)
        {
            cout<<ans<<"\n";
            return ;
        }
    }
    cout<<str.size()-1<<"\n";
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
