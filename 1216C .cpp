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
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll ok(ll x,ll y,ll x1,ll y1,ll x2,ll y2)
{
    if(x<x1||x>x2||y<y1||y>y2)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0,x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    cin>>x5>>y5>>x6>>y6;
    x1*=2,y1*=2,x2*=2,y2*=2;
    x3*=2,y3*=2,x4*=2,y4*=2;
    x5*=2,y5*=2,x6*=2,y6*=2;
    for(i=x1;i<=x2;i++)
    {
        if(ok(i,y1,x3,y3,x4,y4)&&ok(i,y1,x5,y5,x6,y6))
        {
            cout<<"YES"<<"\n";
            return ;
        }
        if(ok(i,y2,x3,y3,x4,y4)&&ok(i,y2,x5,y5,x6,y6))
        {
            cout<<"YES"<<"\n";
            return ;
        }
    }
    for(i=y1;i<=y2;i++)
    {
        if(ok(x1,i,x3,y3,x4,y4)&&ok(x1,i,x5,y5,x6,y6))
        {
            cout<<"YES"<<"\n";
            return ;
        }
        if(ok(x2,i,x3,y3,x4,y4)&&ok(x2,i,x5,y5,x6,y6))
        {
            cout<<"YES"<<"\n";
            return ;
        }
    }
    cout<<"NO"<<"\n";
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
