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
char magic[510][510];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=0;i<=n+2;i++)
    {
        for(j=0;j<=n+2;j++)
            magic[i][j]='.';
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cin>>magic[i][j];
    }
    ll ans=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(magic[i][j]=='X'&&magic[i-1][j-1]=='X'&&magic[i-1][j+1]=='X'&&magic[i+1][j-1]=='X'&&magic[i+1][j+1]=='X')
                ans++;
        }
    }

    cout<<ans<<endl;
    return 0;
}

