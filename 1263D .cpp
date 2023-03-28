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
map<char,ll>mp;
vector<string>v;
ll ans=0,sum=0;
void dfs(char s)
{
    mp[s]++;
    for(ll i=0;i<v.size();i++)
    {
        for(ll j=0;j<v[i].size();j++)
        {
            if(v[i][j]==s)
            {
                sum++;
                for(ll k=0;k<v[i].size();k++)
                {
                    if(mp[v[i][k]])
                        continue;
                    dfs(v[i][k]);
                }
            }
        }
    }
}
void solve()
{
    ll i,j,k,m,n,l,r,q;
    string str;
    bool yes=true;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        map<char,ll>mc;
        string a;
        for(j=0;j<str.size();j++)
        {
            if(mc[str[j]]==0)
            {
                a+=str[j];
                mc[str[j]]++;
            }
        }
        v.push_back(a);
    }
    for(char c ='a';c<='z';c++)
    {
        sum=0;
        if(mp[c])
            continue;
        dfs(c);
        if(sum)
        {
            ans++;
        }
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

