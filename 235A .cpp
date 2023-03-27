
///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
ll lcm1(ll a,ll b,ll c)
{
    return lcm(lcm(a,b),c);
}
ll solve(ll n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    if(n%2!=0)
        return n*(n-1)*(n-2);
    ll x=solve(n-1);
    x=max(x,lcm1(n-2,n-1,n));
    x=max(x,lcm1(n-3,n-1,n));
    x=max(x,lcm1(n-3,n-2,n));
    return x;

}
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    cout<<solve(n)<<endl;

    return 0;
}
