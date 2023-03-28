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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>magic[i][j];
        }
    }
    ll a,b,c,d;
    for(i=n-1;i>1;i--)
    {
        for(j=m-1;j>1;j--)
        {
            if(magic[i][j]==0)
            {
                a=magic[i][j+1];
                b=magic[i+1][j];
                c=min(a,b);
                c--;
                magic[i][j]=c;

            }
        }
    }
    ll sum=0;
    for(i=1;i<=n;i++)
    {
        mp.clear();
        for(j=1;j<=m;j++)
        {
          k=magic[i][j];
          sum+=k;
          mp[k]++;
          if(mp[k]>1)
          {
              cout<<-1<<"\n";
              return 0;
          }
        }
    }
    for(j=1;j<=m;j++)
    {
        for(i=2;i<=n;i++)
        {
            if(magic[i][j]>magic[i-1][j])
            {
                continue;
            }
            else
            {
                cout<<-1<<"\n";
                return 0;
            }
        }
    }
    cout<<sum<<"\n";
    return 0;
}

