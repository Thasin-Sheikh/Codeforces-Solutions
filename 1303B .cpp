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
void solve()
{
    ll i,j,n,ans=0,good,bad,lagbe,day=0;
    cin>>n>>good>>bad;
    if(n<=good)
    {
        cout<<n<<endl;
        return ;
    }
    lagbe=n/2;
    if(n%2)
        lagbe++;
    ll k=lagbe/good;
    ll l,r,kk;
    l=k-1;
    if(k==1)
    {
        day+=good;
        if(lagbe%good==0)
        {
            ll df=n-day;
            day+=min(df,bad);
        }
        else
        {
            day+=bad+lagbe%good;
        }
        cout<<max(n,day)<<endl;
        return ;
    }
    day+=k*good;
    day+=l*bad;
    if(lagbe%good)
    {
        day+=bad+lagbe%good;
    }
    cout<<max(n,day)<<endl;


}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


