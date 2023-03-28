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
string str;
ll mot;
ll ok(ll d)
{
    map<char,ll>mc;
    for(ll i=0;i<=d-2;i++)
    {
        mc[str[i]]++;
    }
    for(ll i=d-1;i<str.size();i++)
    {
        mc[str[i]]++;
        if(mc.size()==mot)
        {
            return true;
        }
        mc[str[i-d+1]]--;
        if(mc[str[i-d+1]]==0)
        {
            mc.erase(str[i-d+1]);
        }
    }
    return false;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    cin>>str;
    set<char>to;
    for(i=0;i<n;i++)
    {
        to.insert(str[i]);

    }
    mot=to.size();
    //cout<<mot<<endl;
    l=1;
    r=n;
    ans=r;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(ok(mid))
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else l=mid+1;
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
