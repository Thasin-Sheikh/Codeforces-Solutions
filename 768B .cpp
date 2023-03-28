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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>l>>r;
    k=log2(n)+1;
    ll pro=1;
    ll base=2;
    if(n==0)
    {
        cout<<0<<"\n";
        return ;
    }
    if(n==1)
    {
        if(r==1)
        {
            cout<<1<<"\n";
        }
        else cout<<0<<"\n";
        return ;
    }
    while(k)
    {
        if(k%2)
        {
            pro*=base;
            k--;
        }
        else
        {
            base*=base;
            k/=2;
        }
    }
   pro--;
   ans=0;
   queue<pair<ll,pair<ll,ll>>>pq;
   pq.push({n,{1,pro}});
   while(!pq.empty())
   {
       pair<ll,pair<ll,ll>>x=pq.front();
       pq.pop();
       ll val=x.first;
       ll a=x.second.first;
       ll b=x.second.second;
       p=(a+b)/2;
       if(p>=l&&p<=r)
       {
           ans+=val%2;
       }
       ll d=val/2;
       if(val==0)
       {
           break;
       }
       if(p<=l)
       {
           pq.push({d,{p+1,b}});
       }
       else if(p>=r)
       {
           pq.push({d,{a,p-1}});
       }
       else
       {
           pq.push({d,{a,p-1}});
           pq.push({d,{p+1,b}});

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
