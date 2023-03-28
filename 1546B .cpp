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
ll cnt[N][30],ag[N][30];
ll cur[30],vcur[30];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<string>v,s;
    cin>>n>>m;
    for(i=0;i<26;i++)
    {
        cur[i]=0;
        vcur[i]=0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<26;j++)
        {
            cnt[i][j]=0;
            ag[i][j]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        cin>>str;
        v.push_back(str);
        for(j=0;j<m;j++)
        {
            ag[j][str[j]-'a']++;
        }
    }
    for(i=0;i<n-1;i++)
    {
        cin>>str;
        s.push_back(str);
        for(j=0;j<m;j++)
        {
            cnt[j][str[j]-'a']++;
        }
    }
    for(i=0;i<n;i++)
    {
        ll f=1;
        for(j=0;j<m;j++)
        {
            l=v[i][j]-'a';
            k=ag[j][v[i][j]-'a']-1;
            if(k!=cnt[j][l])
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            cout<<v[i]<<"\n";
            fflush(stdout);
            return ;
        }
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

