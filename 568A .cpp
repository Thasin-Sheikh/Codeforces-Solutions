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
bool check[30000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,p,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    for(i=1; i<=2000000; i++)
    {
        check[i]=true;
        str=to_string(i);
        string cm;
        cm=str;
        reverse(cm.begin(),cm.end());
        if(cm==str)
        {
            v.push_back(i);
        }
    }
    for(i=2; i<=2000000; i++)
    {
        if(check[i])
        {
            primes.push_back(i);
            for(j=2*i; j<=2000000; j+=i)
                check[j]=false;
        }
    }
    cin>>p>>q;
    ll k2;
    for(i=2000000; i>=1; i--)
    {
        k=upper_bound(primes.begin(),primes.end(),i)-primes.begin();
        k2=upper_bound(v.begin(),v.end(),i)-v.begin();
        if(k*q<=k2*p)
        {
            cout<<i<<"\n";
            return ;
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


