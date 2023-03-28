///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
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
ll power(ll base,ll n)
{
    ll i,j,k;
    ll res=1;
    while(n)
    {
        if(n%2==0)
        {
            base=(base*base)%MOD;
            n/=2;
        }
        else
        {
            res=(res*base)%MOD;
            n--;
        }
    }
    return res%MOD;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    x=power(3,3*n);
    y=power(7,n);
    t=x-y;
    if(t<0)
        t=MOD+t;
    cout<<t<<endl;

    return 0;
}


