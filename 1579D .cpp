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
vector<pair<ll,ll>>ans;
multiset<pair<ll,ll>>v;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    v.clear();
    ans.clear();
    for(i=1; i<=n; i++)
    {
        cin>>l;
        if(l!=0)
        {
            v.insert({l,i});

        }
    }
    while(ll(v.size())>1)
    {
        auto it=v.begin();
        auto jt=v.end();
        jt--;
        k=it->first;
        l=jt->first;
        ll a,b;
        a=it->second;
        b=jt->second;
        if(k==0)
        {
            v.erase(v.begin());
        }
        else if(l==0)
        {
            v.erase(v.find(*jt));
        }
        else
        {
            ans.push_back({a,b});
            v.erase(v.find(*jt));
            v.erase(v.find(*it));
            v.insert({k-1,a});
            v.insert({l-1,b});
        }

    }
    cout<<ans.size()<<"\n";
    for(i=0; i<ans.size(); i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle  chas to endl use kor
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

