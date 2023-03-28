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
    cin>>n>>str;
    set<string>ss;
    for(j=1; j<=3; j++)
    {
        for(i=0; i+j<=n; i++)
        {
            string s=str.substr(i,j);
            ss.insert(s);
        }
    }
    for(char c='a'; c<='z'; c++)
    {
        string st;
        st+=c;
        if(ss.count(st)==0)
        {
            cout<<c<<"\n";
            return ;
        }
    }
    for(char c='a'; c<='z'; c++)
    {
        string kk;
        kk+=c;
        for(char d='a'; d<='z'; d++)
        {
            string pt;
            pt=kk;
            pt+=d;
            if(ss.count(pt)==0)
            {
                cout<<pt<<"\n";
                return ;
            }
        }
    }
    for(char c='a'; c<='z'; c++)
    {
        string kk;
        kk+=c;
        for(char d='a'; d<='z'; d++)
        {
            string pt=kk;
            pt+=d;
            for(char e='a';e<='z';e++)
            {
                string bal=pt;
                bal+=e;
                if(ss.count(bal)==0)
                {
                    cout<<bal<<"\n";
                    return ;
                }
            }
        }
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
