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
map<ll,ll>mp,ans;
vector<pair<ll,pair<ll,ll>>>v;
ll ti[500],s[500],e[500];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    ll sum=0;
    ll f=1;
    for(i=1;i<=m;i++)
    {
        cin>>s[i]>>e[i]>>ti[i];
        v.push_back({e[i],{s[i],ti[i]}});
        mp[e[i]]=i;
        ans[e[i]]=m+1;
    }
    sum=0;
    sort(v.begin(),v.end());
    ll start;
    for(i=0;i<v.size();i++)
    {
       ll lagbe=v[i].second.second;
       start=v[i].second.first;
       for(j=start;j<=v[i].first;j++)
       {
           if(ans[j]==0)
           {
               ans[j]=mp[v[i].first];
               lagbe--;
           }
           if(lagbe==0)
           {
               break;
           }
       }
       if(lagbe)
       {
           cout<<-1<<"\n";
           return 0;
       }
    }
    for(i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

