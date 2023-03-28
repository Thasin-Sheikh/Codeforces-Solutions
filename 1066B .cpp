///*Bismillahir Rahmanir Rahim***///
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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,r,m,a,k,ans=0;
    cin>>n>>r;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a==1)
        {
            ll flag=0;
            for(j=max(1LL,i-r+1); j<=min(n,i+r-1); j++)
            {
                aarray[j]=max(aarray[j],i);
            }
        }
    }
    j=1;
    while(j<=n)
    {
        if(aarray[j]==0)
        {
            cout<<-1<<endl;
            return 0;
        }
        ans++;
        j=aarray[j]+r;
    }
    cout<<ans<<endl;
    return 0;
}


