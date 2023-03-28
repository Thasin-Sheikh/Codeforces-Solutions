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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
ll pre[11][101][101];
void solve()
{
    ll i,j,k,m,n,c,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>q>>c;
    for(i=1;i<=n;i++)
    {
        cin>>l>>r>>m;
        pre[m][l][r]++;
    }
    for(i=0;i<=10;i++)
    {
        for(j=1;j<=100;j++)
        {
            for(k=1;k<=100;k++)
            {
                pre[i][j][k]+=pre[i][j-1][k]+pre[i][j][k-1]-pre[i][j-1][k-1];

            }
        }
    }
    for(i=1;i<=q;i++)
    {
        ll t,x1,y1,x2,y2;
        cin>>t>>x1>>y1>>x2>>y2;
        ans=0;
        for(p=0;p<=c;p++)
        {
            k=(p+t)%(c+1);
            sum=pre[p][x2][y2]-pre[p][x2][y1-1]-pre[p][x1-1][y2]+pre[p][x1-1][y1-1];
            ans+=sum*k;

        }
        cout<<ans<<"\n";
    }
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

