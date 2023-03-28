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
map<pair<ll,pair<ll,ll>>,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    ll ans=0;
    for(i=1; i<=n; i++)
    {
        k=i;
        for(j=i; j<=n; j++)
        {
            while(i*i+j*j>k*k)
            {
                k++;
            }
            if(i*i+j*j==k*k&&k<=n)
            {
                ans++;
            }

        }
    }
    cout<<ans<<"\n";

    return 0;
}

