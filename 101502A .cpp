#include<bits/stdc++.h>
using namespace std;
using ll=long long int ;
using dl=long double;
#define scf(x) scanf("%lld",&x)
#define pf(x) printf("%lld",x)
int  main()
{

    ll count[26],i,j,t,ans,a,b;
    float bs;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        bs=(float(b)/100);
        bs+=1;
        printf("%.0f\n",a/bs);



    }

}
