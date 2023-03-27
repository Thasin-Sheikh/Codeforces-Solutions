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
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>q;
    ll tp;
    ll te=1;
    v.push_back(0);
    ll sz=1;
    while(q--)
    {
        cin>>tp;
        if(tp==2)
        {
            cin>>n;
            sum+=n;
            vis[sz]=0;
            sz++;
            v.push_back(n);
        }
        if(tp==3)
        {
            sz--;
            sum-=v.back();
            v.pop_back();
            sum-=vis[sz];
            vis[sz-1]+=vis[sz];
        }
        if(tp==1)
        {
            ll ai,xi;
            cin>>ai>>xi;
            sum+=ai*xi;
            vis[ai-1]+=xi;
        }
        cout<<setprecision(15)<<dl(sum)/ll(v.size())<<"\n";
    }
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
