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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
void solve()
{
    ll i,j,n,m,ans=0,sum=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>magic[i][j];
        }
    }
    ll nn=(n+1)/2;
    ll mm=(m+1)/2;
    for(i=1;i<=nn;i++)
    {
        for(j=1;j<=mm;j++)
        {
            vector<ll>v;
            v.push_back(magic[i][j]);
            if(j!=m-j+1)
            {
                v.push_back(magic[i][m-j+1]);
            }
            if(i!=n-i+1)
            {
                v.push_back(magic[n-i+1][j]);
                if(j!=m-j+1)
                {
                    v.push_back(magic[n-i+1][m-j+1]);
                }
            }
            sort(v.begin(),v.end());
            ll lagbe=ll(v.size())/2;
            for(ll k=0;k<v.size();k++)
            {
                ans+=abs(v[lagbe]-v[k]);
            }
        }
    }
    cout<<ans<<endl;

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



