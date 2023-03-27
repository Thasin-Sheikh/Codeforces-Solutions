#include<bits/stdc++.h>
using namespace std;
using ll=long long int ;
using dl=long double;
#define scf(x) scanf("%lld",&x)
#define pf(x) printf("%lld",x)

int main()
{
    ll n,m,s,a,b,f,sum[1001],sum1=0,l,p,cox[1001],coy[1001];
    ll i,j,t,k;
    string str;
    dl ans;
    bool prime[1000007];
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for(i=2; i<1000001; i++)
    {
        if(prime[i]==true)
        {
            for(j=2; i*j<1000001; j++)
                prime[i*j]=false;
        }
    }
    vector<ll>vprime;
    for(i=2;i<100001;i++)
    {

        if(prime[i])
        {
            vprime.push_back(i);

        }

    }
    scf(t);
    scf(k);
    ll cnt=0;
    for(i=2;i<=t;i++)
    {
        if(prime[i])
        {
            for(j=0;j<=i;j++)
            {
                if(vprime[j]+vprime[j+1]==i-1)
                {
                    //cout<<i<<endl;
                    cnt++;
                    break;
                }
            }
        }
    }
    //cout<<cnt<<endl;
  if(cnt>=k)
    cout<<"YES"<<endl;
  else cout<<"NO"<<endl;



}
