#include<bits/stdc++.h>
using namespace std;
using ll=long long int ;
using dl=long double;
#define scf(x) scanf("%lld",&x)
#define pf(x) printf("%lld",x)
int main()
{
    double n,m,s,a,b,f,sum[1001],sum1=0,l,p,cox[1001],coy[1001];
    ll i,j,t,k;
    string str;
    dl ans;
    scf(t);
    scf(k);
    vector<dl>vc;
    for(i=0; i<t; i++)
    {
        cin>>cox[i]>>coy[i];
    }
    for(i=0; i<t-1; i++)
    {
        a=(cox[i+1]-cox[i])*(cox[i+1]-cox[i]);
        b=(coy[i+1]-coy[i])*(coy[i+1]-coy[i]);
        f=sqrt(a+b);
        vc.push_back(f);

    }
    for(i=0;i<vc.size();i++)
    {
        sum1+=vc[i];
    }
    ans=sum1/50.0;
   cout<<setprecision(20)<<k*ans<<endl;

}
