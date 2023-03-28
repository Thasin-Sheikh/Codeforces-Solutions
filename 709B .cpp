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
    cin>>n>>m;
    vector<ll> a,b;
    for(i=1; i<=n; i++)
    {
        cin>>l;
       v.push_back(l);
    }
    if(n==1)
    {
        cout<<0<<"\n";
        return ;
    }
    sort(v.begin(),v.end());
    ans=0;
    if(m<=v[0])
    {
        for(i=0; i<v.size()-1; i++)
        {
            ans+=abs(m-v[i]);
            m=v[i];
        }
        cout<<ans<<"\n";
        return ;
    }
    if(m>=v.back())
    {
        for(i=v.size()-1; i>0; i--)
        {
            ans+=abs(m-v[i]);
            m=v[i];
        }
        cout<<ans<<"\n";
        return ;
    }
    ans=10000000000000000;
    l=abs(m-v[1]);
    r=abs(m-v.back());
    ans=min(l,r)+v.back()-v[1];
    l=abs(m-v[0]);
    r=abs(m-v[v.size()-2]);
    //cout<<ans<<endl;
    ans=min(ans,abs(min(l,r)+abs(v[v.size()-2]-v[0])));
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


