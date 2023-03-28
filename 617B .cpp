#include<bits/stdc++.h>
using namespace std;
using ll=long long int ;
using dl=long double;
#define scf(x) scanf("%lld",&x)
#define pf(x) printf("%lld",x)
int  fact(int n)
{
    int dp[n+1];
    dp[0]=1;
    dp[1]=1;
    for(int i=2; i<=n; i++)
    {
        dp[i]=dp[i-1]*i;
    }
    return dp[n];
}

int main()
{
    ll n,m,s,a,b=0,f,sum[1001],sum1=0,l,p=0,cox[1001],coy[1001];
    ll i,j,t,k;
    string str;
    dl ans;
    scf(n);
    s=-1;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a==1)
        {
            if(s==-1)
                p=1;
            else p=p*(i-s);
            s=i;

        }

    }
    cout<<p<<endl;



}
