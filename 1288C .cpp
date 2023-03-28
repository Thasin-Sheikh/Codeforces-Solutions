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
ll facto[100000+10];
ll power( ll a,ll b)
{
    ll i,j,n,m,res=1;
    if(b==-1)
        b=MOD-2;
    while(b)
    {
        if(b%2==0)
        {
            b/=2;
            a=(a*1LL*a)%MOD;
        }
        else
        {
            res=(res*1LL*a)%MOD;
            b--;
        }
    }
    return res;

}
void fact()
{
    ll i,j,n,m;
    facto[0]=facto[1]=1;
    for(i=2;i<=1040;i++)
    {
        facto[i]=(facto[i-1]*1LL*i)%MOD;
    }

}
void solve(ll n, ll r)
{
    ll an,sum,hha,ans;
    ans=((facto[n]*1LL*power(facto[r], -1))%MOD)*power(facto[n-r], -1)%MOD;
    cout<<ans<<endl;

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,z,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n>>m;
    fact();
    x=2*m+n-1;
    y=n-1;
    solve(x,y);



    return 0;
}


