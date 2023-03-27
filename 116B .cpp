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
char  magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    ll ans=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            ll c=0;
            if(magic[i][j]=='W')
            {
                if(i-1>=1&&magic[i-1][j]=='P')
                {
                    ans++;
                    magic[i-1][j]='0';
                }
               else if(j+1<=m&&magic[i][j+1]=='P')
                {
                    ans++;
                    magic[i][j+1]='0';
                }
                else if(j-1>=1&&magic[i][j-1]=='P')
                {
                    ans++;
                    magic[i][j-1]='0';
                }
                else if(i+1<=n&&magic[i+1][j]=='P')
                {
                    ans++;
                    magic[i+1][j]='0';
                }
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}

