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
ll p[N];
ll po(ll va)
{
    for(ll i=0;i<=30;i++)
    {
        if(p[i]>=va)
        {
            return i;
        }
    }
    return 0;
}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    set<ll>d;
    cin>>n;
    q=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ll c=0;
            while(n%i==0)
            {
                v.push_back(i);
                n/=i;
                c++;
            }
            d.insert(c);
            q=max(q,po(c));
        }
    }
    if(v.size()==0)
    {
        cout<<n<<" "<<0<<"\n";
        return ;
    }
    if(n>1)
    {
        v.push_back(n);
        q=max(q,po(1));
        d.insert(1);
    }
    ll pro=1;
    set<ll>s;
    for(i=0;i<v.size();i++)
    {
        s.insert(v[i]);
    }
    ans=1;
    for(auto ss:s)
    {
       ans*=ss;
    }
    l=q;
    while(l--)
    {
        pro*=2;
    }
    if(d.size()!=1)
    {
        q++;
    }
    else
    {
        auto it=d.begin();
        if(pow(2,q)!=*it)
        {
            q++;
        }
    }
    cout<<ans<<" "<<q<<"\n";
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
    p[0]=1;
    for(i=1;i<=30;i++)
    {
        p[i]=p[i-1]*2;
    }
    while(t--)
    {
        solve();
    }
    return 0;
}
