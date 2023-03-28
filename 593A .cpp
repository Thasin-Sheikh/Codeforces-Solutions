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
ll cnt[110][30];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<string>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<26; j++)
        {
            cnt[i][j]=0;
        }
    }
    for(i=1; i<=n; i++)
    {
        cin>>str;
        v.push_back(str);
        for(j=0; j<str.size(); j++)
        {
            cnt[i][str[j]-'a']++;

        }
    }
    ans=0;
    for(char c='a'; c<='z'; c++)
    {
        for(char ch='a'; ch<='z'; ch++)
        {
            sum=0;
            for(i=1; i<=n; i++)
            {
                if(ch==c)
                    l=cnt[i][ch-'a'];
                else l=cnt[i][c-'a']+cnt[i][ch-'a'];
                if(l==v[i-1].size())
                {
                    sum+=l;

                }
            }
            ans=max(ans,sum);
        }
    }
    cout<<ans<<"\n";
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

