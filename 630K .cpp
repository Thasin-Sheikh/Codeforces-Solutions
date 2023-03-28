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
    ll i,j,n,m,k,t;
    cin>>n;
    vector<ll>v;
    ll ans=0;
    ll a,b,c,d,e,f,g,h;
    a=(2*3);
    b=(2*5);
    c=(2*7);
    d=(3*5);
    e=(3*7);
    f=(5*7);
    g=(2*3*5);
    h=(2*3*7);
    i=(2*5*7);
    ll o,p,q,r,s;
    j=(3*5*7);
    p=(2*3*5*7);
    ans=n-(n/2)-(n/3)-(n/5)-(n/7)+(n/a)+(n/b)+(n/c)+(n/d)+(n/e)+(n/f)-(n/g)-(n/h)-(n/i)-(n/j)+(n/p);
    cout<<ans<<"\n";



    return 0;
}

