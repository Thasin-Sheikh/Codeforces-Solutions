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
ll cnt[5];
ll n;
void solve()
{
    ll a,i;
   for(i=0;i<=4;i++)
   {
       cnt[i]=0;
   }
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        cnt[a]++;
    }
    ll b,c,d,b1;
    b=min(cnt[1],min(cnt[2],cnt[3]));
    b1=max(cnt[1],max(cnt[2],cnt[3]));
    c=cnt[1]+cnt[2]+cnt[3];
    d=c-(b+b1);
    cout<<b+d<<endl;

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,m,k,t,a;
    solve();

    return 0;
}

