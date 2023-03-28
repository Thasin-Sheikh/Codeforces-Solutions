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
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        v.push_back(aarray[i]);
    }
    sort(v.rbegin(),v.rend());
    l=k*m;
    while(v.size()>l)
    {
        v.pop_back();
    }
    for(i=0;i<v.size();i++)
    {
        mp[v[i]]++;
        sum+=v[i];
    }
    vector<ll>va;
    ll c=0,f=0;
    for(i=1;i<=n;i++)
    {
        if(mp[aarray[i]])
        {
            c++;
            mp[aarray[i]]--;
        }
        if(c==m)
        {
            va.push_back(i);
            c=0;
        }

    }
    if(va.size()>k-1)
    {
        va.pop_back();
    }
    cout<<sum<<"\n";
    for(auto it:va)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
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
