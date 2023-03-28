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
    ll a=0,b=0,c=0,a1=0,b1=0,c1=0;
    cin>>n>>m;
    if(n==m)
    {
        cout<<0<<"\n";
        return 0;
    }
    while(n%2==0)
    {
        n/=2;
        a++;
    }
    while(n%3==0)
    {
        n/=3;
        b++;
    }
    while(n%5==0)
    {
        n/=5;
        c++;
    }
    while(m%2==0)
    {
        m/=2;
        a1++;
    }
    while(m%3==0)
    {
        m/=3;
        b1++;
    }
    while(m%5==0)
    {
        m/=5;
        c1++;
    }
    if(n!=m)
    {
        cout<<-1<<"\n";
        return 0;
    }
    cout<<(abs(a-a1)+abs(b-b1)+abs(c-c1))<<"\n";
    return 0;
}
