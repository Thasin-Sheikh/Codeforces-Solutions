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
map<ll,ll>cnt;
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>v;
    cin>>n;
    set<ll>s;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        s.insert(l);
        cnt[l]++;
    }
    for(auto it:s)
    {
        if(cnt[it]>=2)
        {
            v.push_back({it,cnt[it]});
        }
    }
    ll h,w;
    dl ans=10000000000.0;
    h=v[0].first;
    w=v[1].first;
    for(i=0;i<v.size();i++)
    {
        if(v[i].second>=4)
        {
            ll a,b;
            a=2*(v[i].first+v[i].first);
            b=v[i].first*v[i].first;
            a*=a;
            dl c=dl(a)/b;
            if(c<ans)
            {
                ans=c;
                w=h=v[i].first;
            }
        }
        if(i<v.size()-1)
        {
            ll a,b;
            a=2*(v[i].first+v[i+1].first);
            b=v[i].first*v[i+1].first;
            a*=a;
            dl c=dl(a)/b;
            if(c<ans)
            {
                ans=c;
                w=v[i].first;
                h=v[i+1].first;
            }
        }
    }
    cout<<w<<" "<<w<<" "<<h<<" "<<h<<"\n";
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
        cnt.clear();
        solve();
    }

    return 0;
}


