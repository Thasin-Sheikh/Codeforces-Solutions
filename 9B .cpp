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
using ld=long double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
dl ttime[1000];
dl atime[1000];
ll vb,vs,vx,vy;
ld dis(ll k)
{
    ld x=(vx-aarray[k]);
    ld y=vy;
    return sqrt(x*x+y*y);
}
ld calc(ll n)
{
    ld t1=(ld)(aarray[n])/vb;
    ld t2=(ld)dis(n)/vs;
    return t1+t2;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k=0;
    cin>>n>>vb>>vs;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    cin>>vx>>vy;
    ll ans=2;
    for(i=3; i<=n; i++)
    {
        if(calc(i)-calc(ans)<1e-14)
        {
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}


