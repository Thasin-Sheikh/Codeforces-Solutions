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
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll ans[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    multiset<ll>s;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=n; i++)
    {
        ll a;
        cin>>a;
        mp[a]++;
        s.insert(a);
    }
    for(i=1; i<=n; i++)
    {
        l=aarray[i];
        r=n-l;
        auto it=s.lower_bound(r);
        if(it==s.end())
        {
            it--;
        }
        k=(*it)+l;
        k%=n;
        auto jt=s.begin();
        ll p=l+(*jt);
        p%=n;
        if(p<k)
        {
            s.erase(s.find(*jt));
            ans[i]=p;
        }
        else
        {
            ans[i]=k;
            s.erase(s.find(*it));
        }
    }
    for(i=1; i<=n; i++)
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
