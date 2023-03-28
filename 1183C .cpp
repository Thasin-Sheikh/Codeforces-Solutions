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
ll n,tcharge;
ll solve(ll l,ll r,ll a,ll b)
{
    ll mid;
    while(l<=r)
    {
         mid=(l+r)/2;
        ll c1,c2;
        c1=mid*a;
        c2=(n-mid)*b;
        if(c1+c2<tcharge)
        {
            l=mid+1;

        }
        else
        {
            r=mid-1;
        }
    }
    ll tot=(mid*a)+(n-mid)*b;
    if(tot>=tcharge)
        mid--;
    return mid;

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    ll i,j,m,k,t,a,b;
    string str;
    cin>>t;
    while(t--)
    {

        cin>>tcharge>>n>>a>>b;
        k=n*b;
        k=tcharge-k;
        if(k<=0)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(n*a<tcharge)
        {
            cout<<n<<endl;
            continue;
        }
        cout<<solve(1LL,n,a,b)<<endl;
    }

    return 0;
}


