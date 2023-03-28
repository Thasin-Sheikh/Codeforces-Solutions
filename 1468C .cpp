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
typedef pair<ll,ll>Pair;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,set<ll>>mp;
set<pair<ll,ll>>sp;
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    ll c=0;
    vector<ll>ans;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        if(l==1)
        {
            c++;
            cin>>r;
            mp[r].insert(c);
            sp.insert({c,r});
        }
        if(l==2)
        {
            pair<ll,ll>x=*sp.begin();
            sp.erase(sp.begin());
            ans.push_back(x.first);
            mp[x.second].erase(x.first);
            if(mp[x.second].empty())
            {
                mp.erase(x.second);
            }
        }
        if(l==3)
        {
            auto it=mp.end();
            it--;
            k=*(it->second.begin());
            ans.push_back(k);
            sp.erase({k,it->first});
            it->second.erase(k);
            if(it->second.empty())
            {
                mp.erase(it);
            }

        }
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
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
