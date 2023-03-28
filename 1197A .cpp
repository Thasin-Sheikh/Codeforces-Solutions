/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long ;
using dl =long double;
int main()
{
    makefast__
    ll n,m,i,j,ans,marks[100000+10],ma,t,two=2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
            cin>>marks[i];
        sort(marks,marks+n+1);
        ma=marks[n];
        ll base=marks[n-1];
        ll mn=n-2;
        ans=min(base-1,mn);
        cout<<ans<<endl;
    }

}
