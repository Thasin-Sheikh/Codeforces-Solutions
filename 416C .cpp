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
vector<ll>aa[N];
multiset<ll>ms;
map<pair<ll,ll>,vector<ll>>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>v,ans;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>l>>r;
        v.push_back({r,l});
        mp[ {r,l}].push_back(i);
    }
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>l;
        ms.insert(l);
        aa[l].push_back(i);
    }
    sort(v.rbegin(),v.rend());
    for(i=0; i<v.size(); i++)
    {
        if(ms.size()==0)
        {
            break;
        }
        auto it=ms.lower_bound(v[i].second);
        if(it==ms.end())
        {
            continue;
        }
        sum+=v[i].first;
        l=v[i].second;
        r=v[i].first;
        if(aa[*it].size()&&mp[ {r,l}].size())
        {
            ans.push_back({aa[*it].back(),mp[{r,l}].back()});
            ms.erase(ms.find(*it));
            aa[*it].pop_back();
            mp[ {r,l}].pop_back();
        }
    }
    cout<<ans.size()<<" "<<sum<<"\n";
    for(i=0; i<ans.size(); i++)
    {
        cout<<ans[i].second<<" "<<ans[i].first<<"\n";
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
