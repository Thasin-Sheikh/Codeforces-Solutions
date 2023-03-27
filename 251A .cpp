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
ll ncr(ll n,ll r)
{
    ll way=1,i;
    ll ex=n-r;
    while(n>ex)
    {
        way*=n;
        n--;
    }
    return way;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,ans=0,a,l;
    cin>>n>>k;
    vector<ll>v;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    j=1;
    for(i=1;i<=n;i++)
    {
        while(j<=n&&aarray[j]<=aarray[i]+k)
            j++;
        //cout<<i<<" "<<j<<endl;
        m=j-i-1;
        ans+=(m*(m-1))/2;
    }
    cout<<ans<<endl;

    return 0;
}


