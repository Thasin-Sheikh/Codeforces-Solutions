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
bool check[10001];
ll vis[N];
map<ll,ll>mp;
void seive()
{
    ll i,j;
    memset(check,true,sizeof(check));
    for(i=2; i<=10000; i++)
    {
        if(check[i])
        {
            primes.push_back(i);
            for(j=2*i; j<=10000; j+=i)
                check[j]=false;
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
    seive();
    cin>>n;
    if(check[n])
    {
        cout<<n<<'\n';
        for(i=1; i<n; i++)
        {
            cout<<i<<" "<<i+1<<'\n';
        }
        cout<<n<<" "<<1<<'\n';
        return 0;
    }
    ll a=upper_bound(primes.begin(),primes.end(),n)-primes.begin();
    a=primes[a];
    k=a-n;
    cout<<n+k<<'\n';
    for(i=1; i<n; i++)
    {
        cout<<i<<" "<<i+1<<'\n';
    }
    cout<<n<<" "<<1<<'\n';
    for(i=1;i<=k;i++)
    {
        cout<<i<<" "<<n-i<<'\n';
    }
    return 0;
}

