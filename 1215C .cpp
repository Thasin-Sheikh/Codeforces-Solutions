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
set<ll>f1[N];
set<ll>f2[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str,s,t;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    cin>>s>>t;
    ll sc[30]= {0},tc[30]= {0};
    for(i=0; i<n; i++)
    {
        sc[s[i]-'a']++;
        sc[t[i]-'a']++;
        if(s[i]!=t[i])
        {
            f1[s[i]-'a'].insert(i);
            f2[t[i]-'a'].insert(i);
        }
    }
    if(sc[0]%2||sc[1]%2)
    {
        cout<<-1<<"\n";
        return ;
    }
    vector<pair<ll,ll>>ans;
    l=f1[0].size();
    r=f1[1].size();
    for(auto it:f1[0])
    {
        v.push_back(it);
    }
    ll a,b,c,d,e,f;
    a=0,b=l-1;
    for(i=a; i<l/2; i++)
    {
        ans.push_back({v[i],v[b]});
        b--;
    }
    vector<ll>va;
    for(auto it:f1[1])
    {
        va.push_back(it);
    }
    a=0,b=r-1;
    for(i=0; i<r/2; i++)
    {
        ans.push_back({va[i],va[b]});
        b--;
    }
    vector<ll>ca;
    if(l%2)
    {
        ca.push_back(v[(l)/2]);
        ca.push_back(va[(r)/2]);
        ans.push_back({ca.back(),ca.back()});
        ans.push_back({ca[0],ca.back()});
    }
    cout<<ans.size()<<"\n";
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
    }
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
