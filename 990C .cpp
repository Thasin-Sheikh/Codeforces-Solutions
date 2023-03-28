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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
string str[N];
ll now[N],close[N],open[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>str[i];
        l=str[i].size();
        ll a=0,b=0,c=0;
        for(j=0;j<l;j++)
        {
            if(str[i][j]=='(')
            {
                c++;
            }
            else
            {
                c--;
            }
            if(c<0)
            {
                a++;
                b+=abs(c);
                c=0;
            }
        }
        if(a&&c)
        {
            now[i]=INT_MAX;
            continue;
        }
        if(a==0&&c==0)
        {
            now[0]++;
        }
        if(b)
        {
            now[i]=b;
            close[b]++;
        }
        if(c)
        {
            now[i]=-c;
            open[c]++;
        }
    }
    ans=0;
    for(i=1;i<=n;i++)
    {
        if(now[i]==0)
        {
            ans+=now[0];
        }
        if(now[i]==INT_MAX)
        {
            continue;
        }
        if(now[i]>0)
        {
            ans+=open[now[i]];
        }
        if(now[i]<0)
        {
            ans+=close[now[i]];
        }
        //cout<<i<<" "<<ans<<"\n";
    }
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

