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
const long MAXN=5e5+10;
int aarray[N];
int magic[R][R];
vector<ll>primes;
bool check[1000001];
int large[10000005];
ll vis[N];
map<ll,ll>mp;
ll chess[5][105][105];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str[1000];
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
    }
    for(j=1; j<=n; j++)
    {
        for(k=1; k<=n; k++)
        {
            chess[1][j][k]=str[j][k-1]-'0';
        }
    }
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
    }
    for(j=1; j<=n; j++)
    {
        for(k=1; k<=n; k++)
        {

            chess[2][j][k]=str[j][k-1]-'0';
        }
    }
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
    }
    for(j=1; j<=n; j++)
    {
        for(k=1; k<=n; k++)
        {

            chess[3][j][k]=str[j][k-1]-'0';
        }
    }
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
    }
    for(j=1; j<=n; j++)
    {
        for(k=1; k<=n; k++)
        {

            chess[4][j][k]=str[j][k-1]-'0';
        }
    }

    for(i=1; i<=4; i++)
    {
        v.push_back(i);
    }
    ans=INT_MAX;
    do
    {
        ll a,b,c,d;
        ll board[2*n+1][2*n+1];
        a=v[0];
        b=v[1];
        c=v[2];
        d=v[3];
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                board[i][j]=chess[a][i][j];
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=n+1; j<=2*n; j++)
            {
                board[i][j]=chess[b][i][j-n];
            }
        }
        for(i=n+1; i<=2*n; i++)
        {
            for(j=1; j<=n; j++)
            {
                board[i][j]=chess[c][i-n][j];
            }
        }
        for(i=n+1; i<=2*n; i++)
        {
            for(j=n+1; j<=2*n; j++)
            {
                board[i][j]=chess[d][i-n][j-n];
            }
        }
        ll cnt=1;
        c=0;
        ll cngneed=0;
        for(i=1; i<=2*n; i++)
        {
            if(i%2)
            {
                c=0;
            }
            else c=1;
            for(j=1; j<=2*n; j++)
            {
                if(board[i][j]!=c)
                {
                    cngneed++;
                }
                c=1-c;
            }
        }
        ans=min(ans,cngneed);
    }
    while(next_permutation(v.begin(),v.end()));
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


