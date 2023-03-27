///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,a,ans,sum=0;
    string str;
    bool yes=false;
    vector<ll>v;
    cin>>n;
    aarray[0]=0;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        aarray[i]=aarray[i-1]+a;
    }
    ll low=1,high=n;
    while(low<high)
    {
        ll mid=(low+high)/2;
        cout<<'?'<<" "<<mid-low+1<<" ";
        for(i=low; i<=mid; i++)
        {

            cout<<i<<" ";
        }
        cout<<endl;
        fflush(stdout);
        ll hi;
        cin>>hi;
        a=aarray[mid]-aarray[low-1];
        if(a+1==hi)
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<'!'<<" "<<high<<endl;
    fflush(stdout);
}

int main()
{
    makefast__
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
