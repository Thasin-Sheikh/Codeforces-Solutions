#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
using ll=long long ;
int main()
{
    ll n,m,a,b,i,j,array[10000];
    vector<ll> vec;
    cin>>n;
    ll mi=INT_MAX;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(i=1;i<n-1;i++)
    {
        ll ma= INT_MIN;
        ll dis=array[i+1]-array[i-1];
        ma=max(ma,dis);
        //cout<<dis<<endl;
        for(j=0;j<i-1;j++)
        {
            ll d=array[j+1]-array[j];
            ma=max(ma,d);
        }
        for(j=i+1;j<n-1;j++)
        {
            ll d=array[j+1]-array[j];
            vec.push_back(d);
            //cout<<d<<endl;
            //cout<<j<<endl;
            ma=max(ma,d);
        }
        //cout<<ma<<endl;
        mi=min(ma,mi);
    }
cout<<mi<<endl;
}
