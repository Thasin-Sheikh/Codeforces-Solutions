#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
using ll=long long ;
ll flag=0;
ll ar[100];

int main()
{
    ll n,i,sum=0,l,t=1;
    string ptr;
    cin>>n;

    while(t<=n)
    {
        sum+=n-t+1;
        t*=10;
    }
    cout<<sum<<endl;
}
