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
const long maxn=5e5+10;
ll aarray[N];
char magic[100][100];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
char a[100][100],b[100][100];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>magic[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i%2)
            {
                if(j%2)
                {
                    a[i][j]='W';
                    b[i][j]='R';
                }

                else
                {
                    a[i][j]='R';
                    b[i][j]='W';
                }
            }
            else
            {
                if(j%2)
                {
                    a[i][j]='R';
                    b[i][j]='W';
                }
                else{
                    a[i][j]='W';
                    b[i][j]='R';
            }

            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
           if(magic[i][j]!='.'&&magic[i][j]!=a[i][j])
           {
               sum++;
               break;
           }
        }
        if(sum)
        {
            break;
        }
    }
    if(sum==0)
    {
        cout<<"YES"<<"\n";
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }
        return ;
    }
    sum=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
           if(magic[i][j]!='.'&&magic[i][j]!=b[i][j])
           {
               sum++;
               break;
           }
        }
        if(sum)
        {
            break;
        }
    }
    if(sum==0)
    {
        cout<<"YES"<<"\n";
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cout<<b[i][j];
            }
            cout<<"\n";
        }
        return ;
    }
    cout<<"NO"<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
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

