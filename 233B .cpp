///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
ll n;
ll bs(ll x)
{
    ll nm=x,k;
    ll sum=0;
    while(nm)
    {
        k=nm%10;
        sum+=k;
        nm/=10;
    }
    return sum;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,m,k,t;
    cin>>n;
    ll l,r;
    l=0;
    r=sqrt(n);
    for(i=r;i>0&&r-i<=40;i--)
    {
        if(i*i+bs(i)*i==n)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<"\n";
    return 0;
}



