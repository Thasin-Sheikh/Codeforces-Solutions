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
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    set<ll>s;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        s.insert(i);
    }
    ll x;
    while(m--)
    {
        cin>>l>>r>>x;
        auto it=s.lower_bound(l);
        vector<ll>er;
        while(it!=s.end())
        {
            ll p=*it;
            if(p>r)
            {
                break;
            }
            if(p!=x)
            aarray[p]=x,er.push_back(p);
            it++;
        }
        for(auto c:er)
        {
            s.erase(c);
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<aarray[i]<<" ";
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

