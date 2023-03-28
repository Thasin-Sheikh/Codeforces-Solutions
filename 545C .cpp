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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll x[N],h[N];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i]>>h[i];
    }
    if(n<=2)
    {
        cout<<n<<"\n";
        return 0 ;
    }
    ll a,b;
    b=x[1];
    ll ans;
    ans=2;
    for(i=2;i<n;i++)
    {
        k=x[i]-h[i];
        if(b<k)
        {
            //cout<<1<<" "<<i<<" "<<k<<endl;
            ans++;
            b=x[i];
        }
        else
        {
            k=x[i]+h[i];
            if(k<x[i+1])
            {
                ans++;
                b=k;
            }
            else
            {
                b=x[i];
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}

