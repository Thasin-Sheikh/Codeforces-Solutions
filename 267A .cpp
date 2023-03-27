#include<bits/stdc++.h>
using namespace std;
using ll=long long int ;
using dl=long double;
#define scf(x) scanf("%lld",&x)
#define pf(x) printf("%lld",x)
int main()
{

    ll i,j,n,m,cnt,t0,t;
    scf(t0);
    while(t0--)
    {
        t=0;
        scf(n);
        scf(m);
       if(n<m)
       {
           swap(n,m);
       }
       while(m!=0)
       {
          t+=n/m;
          n=n%m;
          if(n<m)
            swap(n,m);
       }
       cout<<t<<endl;


    }


}
