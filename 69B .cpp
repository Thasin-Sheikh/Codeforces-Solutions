///***Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
ll start[1000],eend[1000],ttime[1000],profit[1000];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>start[i]>>eend[i]>>ttime[i]>>profit[i];
    }
    ll ans=0;
    for(i=1; i<=n; i++)
    {
        ll add=0,mx=0,lagbe=INT_MAX;
        for(j=1; j<=m; j++)
        {
            if((i>=start[j]&&i<=eend[j])&&ttime[j]<lagbe)
            {
                add=1;
                lagbe=ttime[j];
                mx=profit[j];

            }
        }
        if(add)
        {
            ans+=mx;
        }
        //cout<<ans<<" ";
    }
    cout<<ans<<endl;
    return 0;
}


