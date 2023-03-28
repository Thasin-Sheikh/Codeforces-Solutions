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
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        mp[l]++;
    }
    if(mp.size()==1)
    {
        cout<<n<<"\n";
        return ;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        v.push_back(it->second);
    }
    sort(v.rbegin(),v.rend());
    for(i=1;i<v.size();i++)
    {
        sum+=v[i];
    }
    if(v[0]>sum)
    {
        cout<<v[0]-sum<<"\n";
        return ;
    }
    if(n%2)
        cout<<1<<"\n";
    else
    cout<<0<<"\n";
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
        mp.clear();
        solve();
    }

    return 0;
}


