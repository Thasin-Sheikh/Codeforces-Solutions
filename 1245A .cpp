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
    ll a,b,c,d,t,n,m,i,j;
    ll first[2],second[2];
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(__gcd(a,b)==1)
            cout<<"Finite"<<endl;
        else cout<<"Infinite"<<endl;
    }

}
