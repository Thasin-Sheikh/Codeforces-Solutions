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
ll psum[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll ti;
    cin>>n>>k>>ti;
    for(i=1;i<=k;i++)
    {
        cin>>l;
        v.push_back(l);
        sum+=l;
    }
    sort(v.begin(),v.end());
    ans=0;
    for(i=0;i<=min(n,ti/sum);i++)
    {
        ll ex=ti-i*sum;
        ll mx=(k+1)*i;
        for(j=0;j<v.size();j++)
        {
            ll rem=min(n-i,ex/v[j]);
            mx+=rem;
            ex-=rem*v[j];
        }
        ans=max(ans,mx);
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


