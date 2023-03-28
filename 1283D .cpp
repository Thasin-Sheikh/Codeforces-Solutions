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
queue<ll>q;
void solve()
{
    ll i,j,k,m,n,l,r,ans=0,sum=0;
    string str;
    bool yes=true;
    vector<ll>v,v2;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]=0;
        q.push(aarray[i]);
    }
    while(q.size()>0)
    {
        if(v.size()==m)
        {
            break;
        }
        ll val=q.front();
        q.pop();
        if(mp[val])
        {
            ans+=mp[val];
            v.push_back(val);
        }
        if(mp.count(val-1)==0)
        {
            mp[val-1]=mp[val]+1;
            q.push(val-1);
        }
        if(mp.count(val+1)==0)
        {
            mp[val+1]=mp[val]+1;
            q.push(val+1);
        }
    }
    cout<<ans<<"\n";
    for(auto vv:v)
    {
        cout<<vv<<" ";
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
