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
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0,c1,c2,c3,a1,a2,a3,a4,a5;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>c1>>c2>>c3;
    cin>>a1>>a2>>a3>>a4>>a5;
    if(a1>c1||a2>c2||a3>c3)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    c1-=a1;
    c2-=a2;
    c3-=a3;
    if(c1)
    {
        k=min(c1,a4);
        c1-=k;
        a4-=k;
    }
    if(c2)
    {
        k=min(c2,a5);
        a5-=k;
        c2-=k;
    }
    if(a4+a5>c3)
    {
        cout<<"NO"<<"\n";
    }
    else cout<<"YES"<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
