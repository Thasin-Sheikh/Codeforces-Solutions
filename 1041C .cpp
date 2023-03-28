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
map<ll,ll>ans;
//ll ans[N];
set<ll>s;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll d;
    cin>>n>>m>>d;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        s.insert(aarray[i]);
    }
    ll curday=1;
    ll bound=*s.begin();
    ans[bound]=1;
    s.erase(s.begin());
    bound+=d+1;
    while(s.size())
    {
        auto it=s.lower_bound(bound);
        if(it!=s.end())
        {
            ans[*it]=curday;
            bound=d+1+*it;
            s.erase(*it);
        }
        else
        {
            curday++;
            bound=*s.begin();
            ans[bound]=curday;
            bound=d+1+bound;
            s.erase(s.begin());
        }
    }
    cout<<curday<<"\n";
    for(i=1;i<=n;i++)
    {
        cout<<ans[aarray[i]]<<" ";
    }
    cout<<"\n";
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

