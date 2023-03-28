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
    ll n,m,i,j,ans=0,marks[10000],ma;
    string s[10000];
    cin>>n>>m;
    for(i=0; i<n; i++)
        cin>>s[i];
    for(i=0; i<m; i++)
        cin>>marks[i];
    for (ll i=0; i<m; i++)
    {
        ma=0;
        for (ll j=0; j<n; j++)
        {
            po[i][s[j][i]-'A']++;
        }
        for (ll j=0; j<5; j++)
        {
            ma=max(ma, po[i][j]);
        }
        ans+=ma*marks[i];
    }
    cout<<ans<<endl;
}
