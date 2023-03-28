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
map<ll,ll>mp;
ll cnt[N];
pair<ll,ll>a[N];
vector<ll>v[N];
ll ans[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    set<ll>s;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        v[n-aarray[i]].push_back(i);
    }
    ll col=1;
    for(i=1;i<=n;i++)
    {
        if(ll(v[i].size())%i)
        {
            cout<<"Impossible"<<"\n";
            return ;
        }
        ll dv=ll(v[i].size())/i;
        for(j=1;j<=dv;j++)
        {
            for(k=1;k<=i;k++)
            {
                ans[v[i].back()]=col;
                v[i].pop_back();
            }
            col++;
        }
    }
    cout<<"Possible"<<"\n";
    for(i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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


