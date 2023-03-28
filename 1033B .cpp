#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
using ll=long long ;
int main()
{
    ll a,b,n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a-b>1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool prime=true;
        ll x=a+b;
        for(ll i=2; i*i<=x; i++)
        {
            if(x%i==0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
