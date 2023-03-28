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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll pre[100000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    cin>>n>>m;
    vector<pair<ll,ll>>v;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    a=0,b=0;
    vector<ll>aa;
    for(auto it=v.begin();it!=v.end();it++)
    {
        a+=it->second;
        b=it->first;
        aa.push_back(b);
        mp[b]=a;
    }
    for(i=1;i<=n;i++)
    {
        a=aarray[i];
        b=upper_bound(aa.begin(),aa.end(),a)-aa.begin();
        b--;
        cout<<mp[aa[b]]<<" ";
    }
    cout<<"\n";

    return 0;
}




