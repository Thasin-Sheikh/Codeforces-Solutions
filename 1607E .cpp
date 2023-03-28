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
    cin>>n>>m;
    cin>>str;
    l=0;
    ll fl=0;
    ll u=0;
    ll maxx=0,maxy=0,minx=0,miny=0;
    ll curr=1,curc=1;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]=='L')
        {
            l--;
            maxx=max(maxx,l);
            minx=min(minx,l);

        }
        if(str[i]=='R')
        {
            l++;
            maxx=max(maxx,l);
            minx=min(minx,l);

        }
        if(str[i]=='U')
        {
            u--;
            maxy=max(maxy,u);
            miny=min(miny,u);

        }
        if(str[i]=='D')
        {
            u++;
            maxy=max(maxy,u);
            miny=min(miny,u);

        }
        ll x=m-maxx;
        ll y=n-maxy;
        if(x>=1&&x<=m&&x+maxx<=m&&x+minx>=1&&y>=1&&y<=n&&y+maxy<=n&&y+miny>=1)
        {
            //cout<<maxx<<" "<<minx<<" "<<maxy<<" "<<miny<<endl;
            curc=x;
            curr=y;
        }
        else
        {
            break;
        }
        //cout<<curr<<" "<<curc<<endl;
    }

        cout<<curr<<" "<<curc<<"\n";
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

