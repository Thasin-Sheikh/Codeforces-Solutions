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
void solve()
{
    ll i,j,k,m,n,l,r,c=0,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    ll ma=0,mi=INT_MAX;
    for(i=1; i<=n; i++)
    {
        cin>>q;
        mp[q]++;
        ma=max(ma,q);
        mi=min(mi,q);
    }
    ans=0;
    r=ma;
    ma++;
    while(1)
    {
        l=sum-c*(ma-1);
        if(l>k)
        {
            //cout<<l<<" "<<c<<endl;
            ans++;
            sum=ma*c;
            r=ma;
        }
        if(ma==mi)
        {
            break;
        }
        ma--;
        sum+=mp[ma]*ma;
        c+=mp[ma];
    }
    //cout<<r<<endl;
    if(r!=mi)
    {
        ans++;
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
