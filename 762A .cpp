#include<bits/stdc++.h>
using namespace std;
using ll =long long ;
using dl=long double;
#define scf(x) scanf("%lld",&x)
#define pf(x) printf("%lld",x)
int main()
{
    ll n,m,a,b;
    cin>>n>>m;
    vector<ll >dv;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            dv.push_back(i);
            if(i*i!=n)
                dv.push_back(n/i);

        }
    }
    sort(dv.begin(),dv.end());
    if(dv.size()<m)
        cout<<-1<<endl;
    else
        cout<<dv[m-1]<<endl;
}

