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
bool ok[1000001];
string s;
ll solve(ll l ,ll r,char c)
{
   ll a,b,mid,i,j;
   if(l==r)
   {
       if(s[l]==c)
        return 0;
       else return 1;
   }
   mid=(l+r)/2;
   ll c1=0,c2=0;
   for(i=l;i<=mid;i++)
   {
       if(s[i]!=c)
        c1++;
   }
   a=c1+solve(mid+1,r,c+1);
   for(i=mid+1;i<=r;i++)
   {
       if(s[i]!=c)
        c2++;
   }
   b=c2+solve(l,mid,c+1);
   return min(a,b);

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,k,t,n;
    cin>>t;
    ll ans;
    while(t--)
    {
        cin>>n>>s;
        ans=solve(0LL,n-1,'a');
        cout<<ans<<endl;
    }

    return 0;
}


