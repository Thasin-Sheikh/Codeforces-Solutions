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
ll rc[210],gc[210],bc[210];
ll dp[201][201][201];
ll solve(ll x,ll y,ll z)
{
    if(dp[x][y][z])
        return dp[x][y][z];
    if(!(x|y)||!(x|z)||!(y|z))
        return 0;
    ll a=0,b=0,c=0;
    if(x&&y)
    a=rc[x]*gc[y]+solve(x-1,y-1,z);
    if(x&&z)
    b=rc[x]*bc[z]+solve(x-1,y,z-1);
    if(y&&z)
    c=gc[y]*bc[z]+solve(x,y-1,z-1);
    return dp[x][y][z]=max(a,max(b,c));

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,r,g,b;
    cin>>r>>g>>b;
    for(i=1; i<=r; i++)
    {
        cin>>rc[i];
    }
    for(i=1; i<=g; i++)
    {
        cin>>gc[i];
    }
    for(i=1; i<=b; i++)
    {
       cin>>bc[i];
    }
    sort(rc+1,rc+r+1);
    sort(gc+1,gc+g+1);
    sort(bc+1,bc+b+1);
    cout<<solve(r,g,b)<<endl;




}


