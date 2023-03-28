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
    priority_queue<pair<ll,ll>>pq;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
    }
    for(i=1; i<=n-1; i++)
    {
        cin>>l>>r;
        mp[l]++;
        mp[r]++;
    }
    for(i=1; i<=n; i++)
    {
        if(mp[i]>1)
            pq.push({aarray[i],mp[i]-1});
    }
    v.push_back(sum);
    n-=2;
    while(n--)
    {
        pair<ll,ll>x=pq.top();
        sum+=x.first;
        pq.pop();
        v.push_back(sum);
        if(x.second-1>0)
        pq.push({x.first,x.second-1});
    }
    for(auto i:v)
    {
        cout<<i<<" ";
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
    cin>>t;
    while(t--)
    {
        mp.clear();
        solve();
    }
    return 0;
}
