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
    ll st,en;
    cin>>n>>st>>en;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        v.push_back(l);

    }
    sort(v.begin(),v.end());
    ans=0;
    for(i=0;i<v.size()-1;i++)
    {
        l=st-v[i];
        r=en-v[i];
        ll lb=upper_bound(v.begin()+i,v.end(),l-1)-v.begin();
        ll up=upper_bound(v.begin()+i,v.end(),r)-v.begin();
        up--;
        //cout<<i<<" "<<up<<" "<<lb<<endl;
        if(lb==i)
        {
            lb++;
        }
        if(up>=lb)
        ans+=(up-lb+1);
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
