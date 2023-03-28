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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll a=0,b=1023;
    for(i=1;i<=n;i++)
    {
        cin>>str>>l;
        if(str=="|")
        {
            a|=l;
            b|=l;
        }
        if(str=="^")
        {
            a^=l;
            b^=l;
        }
        if(str=="&")
        {
            a&=l;
            b&=l;
        }
    }
    ll door=0,doxor=0;
    for(i=0;i<10;i++)
    {
        bool allzero,allone;
        allone=(b&(1LL<<i));
        allzero=(a&(1LL<<i));
        if(allzero==0&&allone==1)
        {
            continue;
        }
        else if(allzero==1&&allone==0)
        {
            doxor=(doxor|(1LL<<i));
        }
        else if(allzero==1&&allone==1)
        {
            door=(door|(1LL<<i));
        }
        else if(allzero==0&&allone==0)
        {
            door=(door|(1LL<<i));
            doxor=(doxor|(1LL<<i));
        }
    }
    cout<<2<<"\n";
    cout<<"|"<<" "<<door<<"\n";
    cout<<"^"<<" "<<doxor<<"\n";
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
