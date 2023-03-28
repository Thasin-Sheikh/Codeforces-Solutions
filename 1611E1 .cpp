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
ll cnt[N];
vector<ll>ed[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    ll col[n+5];
    queue<ll>Q;
    for(i=1;i<=n;i++)
    {
        col[i]=-1;
        ed[i].clear();
    }
    for(i=1;i<=k;i++)
    {
        cin>>l;
        Q.push(l);
        col[l]=0;
    }
    col[1]=1;
    Q.push(1);
    for(i=1;i<n;i++)
    {
        cin>>q>>r;
        ed[r].push_back(q);
        ed[q].push_back(r);
    }
    while(Q.size())
    {
        ll a=Q.front();
        //cout<<a<<endl;
        Q.pop();
        for(auto x:ed[a])
        {
            if(col[x]==-1)
            {
                col[x]=col[a];
                Q.push(x);
            }
         }

    }
    for(i=2;i<=n;i++)
    {
        if(col[i]==1&&ed[i].size()==1)
        {
            cout<<"YES"<<"\n";
            return ;
        }
    }
    cout<<"NO"<<"\n";
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

