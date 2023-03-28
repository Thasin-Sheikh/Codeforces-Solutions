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
ll vis[N];
map<ll,ll>mp;
ll a[N],b[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll ta,tb;
    cin>>n>>m>>ta>>tb>>k;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=m; i++)
    {
        cin>>b[i];
       v.push_back(b[i]);
    }
    if(k>=n||k>=m)
    {
        cout<<-1<<"\n";
        return ;
    }
    ans=0;
    for(i=1;i<=n;i++)
    {
        ll ex=k-i+1;
        if(ex==-1)
        {
            break;
        }
        l=lower_bound(v.begin(),v.end(),a[i]+ta)-v.begin();
        l++;
       // cout<<i<<" "<<ex<<" "<<l<<endl;
        if(ex+l>m)
        {
            cout<<-1<<"\n";
            return ;
        }
        ans=max(ans,v[l+ex-1]+tb);
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
