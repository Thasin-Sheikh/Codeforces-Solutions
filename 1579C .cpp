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
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll kk;
    cin>>n>>m>>kk;
    char magic[n+5][m+5];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
        }
    }
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=m; j++)
        {
            if(magic[i][j]!='.')
            {
                ll cr=i-1;
                ll os1,os2;
                os1=os2=0;
                for(k=j-1; k>=1&&cr>=1; k--)
                {
                    if(magic[cr][k]=='*'||magic[cr][k]=='0')
                        os1++;
                    else break;
                    cr--;
                }
                cr=i-1;
                for(k=j+1; k<=m&&cr>=1; k++)
                {
                    if(magic[cr][k]=='*'||magic[cr][k]=='0')
                    {
                        os2++;
                    }
                    else break;
                    cr--;
                }
                p=min(os1,os2);
                if(p>=kk)
                {
                    cr=i-1;
                    os1=os2=p;
                    for(k=j-1; k>=1&&os1; k--,os1--)
                    {
                        if(magic[cr][k]=='*')
                            magic[cr][k]='0';
                        cr--;
                    }
                    cr=i-1;
                    for(k=j+1; k<=m&&os2; k++,os2--)
                    {
                        if(magic[cr][k]=='*')
                        {
                            magic[cr][k]='0';

                        }
                        cr--;
                    }
                    magic[i][j]='0';

                }
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(magic[i][j]=='*')
            {
                cout<<"NO"<<"\n";
                return ;
            }
        }
    }
    cout<<"YES"<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

