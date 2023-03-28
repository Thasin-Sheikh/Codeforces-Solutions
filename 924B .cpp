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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    dl ans=INT_MIN;
    ll u;
    cin>>n>>u;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        v.push_back(l);
    }
    for(i=0;i<v.size()-2;i++)
    {
        l=upper_bound(v.begin(),v.end(),v[i]+u)-v.begin();
        l--;
        if(l-i+1<3)
        {
            continue;
        }
        dl pp=dl(v[l]-v[i+1])/(v[l]-v[i]);
        ans=max(ans,pp);
    }
    if(ans==INT_MIN)
    {
        cout<<-1<<"\n";
        return ;
    }
    cout<<setprecision(15)<<ans<<"\n";
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

