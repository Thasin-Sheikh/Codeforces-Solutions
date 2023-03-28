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
    ll a,b,c,r;
    cin>>a>>b>>c>>r;
    if(a>b)
    {
        swap(a,b);
    }
    ll L,R;
    L=c-r;
    R=c+r;
    //cout<<L<<" "<<R<<endl;
    if(a>R||b<L)
    {
        cout<<b-a<<endl;
        return;
    }
    if(L<a)
    {
        L=a;
    }
    if(R>b)
        R=b;
    ll dif=R-L+1;
    cout<<(b-a+1)-(dif)<<endl;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b,c,r;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


