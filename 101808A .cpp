/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
int main()
{
    makefast__
    dl a,b,n,m;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a*a>(2*b*b))
            cout<<1<<endl;
        else cout<<2<<endl;
    }
}
