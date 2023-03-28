
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
const int N = 15000000;
ll aarray[300000+10];
ll magic[101][101];
ll sp[N+5];
vector<ll>primes;
bool prime[1000001];
void seive()
{
    ll i,j,m;
    for(i=2;i<=N;i+=2)
        sp[i]=2;
    for(i=3;i<=N;i+=2)
    {
        if(sp[i]==0)
        {
            sp[i]=i;
            for(j=2*i;j<=N;j+=i)
            {
                sp[j]=i;
            }
        }
    }

}
void prime_gcd(ll n)
{
    while(n>1)
    {
        ll k=sp[n];
        while(n%k==0)
        {
            n/=k;
        }
    }
}
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
   ll gcd=0;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        gcd=(__gcd(gcd,aarray[i]));
    }

    return 0;
}

