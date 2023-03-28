///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 1001
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
char  magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<pair<pair<ll,ll>,ll>>v,vc;
    cin>>n>>m;
    ll a,b,c,d;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>magic[i][j];
        }
    }
    ll p,s;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(magic[i][j]=='*')
            {
                a=j+1;
                p=i-1;
                s=i+1;
                b=j;
                c=j-1;
                d=j;
                ll cou=0;
                while(a<=m&&magic[i][a]=='*'&&c>=1&&magic[i][c]=='*'&&p>=1&&magic[p][b]=='*'&&s<=n&&magic[s][d]=='*')
                {
                    cou++;
                    a++;
                    p--;
                    c--;
                    s++;
                }
                if(cou>0)
                {
                    v.push_back({{i,j},cou});
                }
            }
        }
    }
    vc=v;
    while(vc.size()>0)
    {
        pair<pair<ll,ll>,ll>vv=vc.back();
        vc.pop_back();
        a=vv.first.first,b=vv.first.second,c=vv.second;
        ll e,f,g,h;
        e=a-1;
        f=b+1;
        g=b-1;
        h=a+1;
        //cout<<a<<" "<<b<<" "<<c<<endl;
        magic[a][b]='0';
        while(c)
        {
            magic[a][f]='0';
            magic[a][g]='0';
            magic[e][b]='0';
            magic[h][b]='0';
            e--;
            f++;
            g--;
            h++;
            c--;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(magic[i][j]=='*')
            {
                cout<<-1<<"\n";
                return ;
            }
        }
    }
    cout<<v.size()<<"\n";
    for(auto i:v)
    {
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<'\n';
    }
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

