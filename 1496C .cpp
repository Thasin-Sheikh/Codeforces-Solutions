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
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>a,b;
    ll x,y;
    cin>>n;
    for(i=1;i<=2*n;i++)
    {
        cin>>x>>y;
        if(x==0)
        {
            a.push_back({abs(x),abs(y)});
        }
        else
        {
            b.push_back({abs(x),abs(y)});
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    dl ans=0,ans2=0;
    for(i=0;i<a.size();i++)
    {
        ans+=sqrt((a[i].first-b[n-i-1].first)*(a[i].first-b[n-i-1].first)+((a[i].second-b[n-1-i].second)*(a[i].second-b[n-1-i].second)));
        ans2+=sqrt((a[i].first-b[i].first)*(a[i].first-b[i].first)+((a[i].second-b[i].second)*(a[i].second-b[i].second)));
    }
    cout<<setprecision(20)<<min(ans,ans2)<<"\n";
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


