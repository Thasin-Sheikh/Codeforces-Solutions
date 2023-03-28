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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<pair<ll,ll>,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m>>k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
        }
    }
    for(j=m; j>=1; j--)
    {
        for(i=n; i>=1; i--)
        {
            if(magic[i][j]==1)
            {
                mp[ {i,j}]=mp[ {i+1,j}]+1;
            }
            else
            {
                mp[ {i,j}]=mp[ {i+1,j}];
            }
        }
    }
    ll change=0;
    ans=0;
    for(j=1;j<=m;j++)
    {
        ll c=0;
        ll pre=0;
        ll cc=0;
        for(i=1;i<=n;i++)
        {
            if(magic[i][j]==1)
            {
                l=n-i+1;
                l=min(l,k);
                l--;
                r=mp[{i,j}]-mp[{i+l+1,j}];
                if(r>pre)
                {
                    pre=r;
                    cc=c;
                }
                c++;
            }
        }
        //cout<<j<<" "<<pre<<endl;
        ans+=pre;
        change+=cc;
    }
    cout<<ans<<" "<<change<<"\n";
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


