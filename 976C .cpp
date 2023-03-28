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
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<pair<ll,ll>,ll>mp;
vector<pair<ll,ll>>v;
void solve()
{
    ll i,j,k,m,n,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    ll l[n+1],r[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>l[i]>>r[i];
        v.push_back({l[i],r[i]});
    }
    sort(v.begin(),v.end());
    ll a=-1,b=-1,c=-1,d=-1;
    for(i=1; i<v.size(); i++)
    {
        if(v[i-1].first<=v[i].first&&v[i-1].second>=v[i].second)
        {
            a=v[i-1].first;
            b=v[i-1].second;
            c=v[i].first;
            d=v[i].second;
            break;
        }
        if(v[i].first<=v[i-1].first&&v[i].second>=v[i-1].second)
        {
            a=v[i].first;
            b=v[i].second;
            c=v[i-1].first;
            d=v[i-1].second;
            break;
        }
    }
    if(a==-1)
    {
        cout<<-1<<" "<<-1<<"\n";
        return ;
    }
    ll s,e;
    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    for(i=1;i<=n;i++)
    {
        if(l[i]==a&&r[i]==b)
        {
            e=i;
            break;
        }
    }
     for(i=1;i<=n;i++)
    {
        if(l[i]==c&&r[i]==d&&i!=e)
        {
            s=i;
            break;
        }
    }
    cout<<s<<" "<<e<<"\n";
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


