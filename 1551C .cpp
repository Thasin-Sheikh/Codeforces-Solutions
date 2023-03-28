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
vector<ll>ans[30];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    for(i=0;i<26;i++)
    {
        ans[i].clear();
    }
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>str;
        ll cnt[26];
        l =str.size();
        for(j=0;j<26;j++)
        {
            cnt[j]=0;
        }
        for(j=0;j<l;j++)
        {
            cnt[str[j]-'a']++;
        }
        for(j=0;j<26;j++)
        {
            ans[j].push_back(cnt[j]-(l-cnt[j]));
        }
    }
    for(i=0;i<26;i++)
    {
        sort(ans[i].rbegin(),ans[i].rend());
        ll cl=0;
        ll tot=0;
        for(j=0;j<ans[i].size();j++)
        {
            k=ans[i][j];
            if(cl+k>0)
            {
                cl+=k;
                tot++;
            }
            else break;
        }
        sum=max(sum,tot);
    }
    cout<<sum<<"\n";
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

