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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
void dta(ll a,ll b)
{
    if(b==0)
    {
        return ;
    }
    if(b==3)
    {
        cout<<a<<" "<<a<<" ";
        dta(3*a,1);
    }else{
    for(ll i=1;i<=b;i+=2)
    {
        cout<<a<<" ";
    }
    dta(2*a,b/2);}
}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    if(n==1)
    {
        cout<<1<<"\n";
        return;
    }
    if(n==2)
    {
        cout<<1<<" "<<2<<"\n";
        return ;
    }
    if(n==3)
    {
        cout<<1<<" "<<1<<" "<<3<<"\n";
        return ;
    }
    dta(1,n);

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

