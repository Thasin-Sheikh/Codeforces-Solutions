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
pair<ll,ll>p[110][110];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t,q;
    cin>>n>>m>>q;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            p[i][j]={i,j};
        }
    }
    ll r,c,x;
    while(q--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>k;
            for(j=2;j<=m;j++)
            {
                swap(p[k][j],p[k][j-1]);
            }
        }
        if(t==2)
        {
            cin>>k;
            for(j=2;j<=n;j++)
            {
                swap(p[j][k],p[j-1][k]);
            }
        }
        if(t==3)
        {
            cin>>r>>c>>x;
            magic[p[r][c].first][p[r][c].second]=x;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<magic[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}



