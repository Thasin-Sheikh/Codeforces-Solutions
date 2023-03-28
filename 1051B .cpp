#include<bits/stdc++.h>
using namespace std;
using ll=long long int ;
using dl=long double;
#define scf(x) scanf("%lld",&x)
#define pf(x) printf("%lld",x)
int  main()
{
    ll n, m,array[10000+10],a,b,i,j;
    vector<pair<ll,ll>>rose,lili;
    ll count[100000];
    memset(count,0,sizeof(count));
    scf(n);
    scf(m);
    a=((m-n)+1)/2;
    if(n==m)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    ll c=0;
    cout<<"YES"<<endl;
    for(i=n;i<=m;i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
        c++;
        if(c==a)
            return 0;
    }
}
