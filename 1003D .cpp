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
map<ll,ll>mp,pp;
void solve()
{
    ll i,j,k,m,q,n,l,r,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    set<ll>s;
    cin>>n>>q;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
        s.insert(aarray[i]);
    }
    for(auto i:s)
    {
        v.push_back(i);
    }
    reverse(v.begin(),v.end());
    ll vl;
    pp=mp;
    while(q--)
    {
        cin>>vl;
        ll c=0;
        for(i=0;i<v.size();i++)
        {
            if(vl>=v[i])
            {
                ll ache=mp[v[i]];
                ll p=vl/v[i];
                ll mi=min(ache,p);
                c+=mi;
                mi*=v[i];
                vl-=mi;
                mp[v[i]]-=mi;
            }
        }
        mp=pp;
        if(vl==0)
        {
            cout<<c<<"\n";
        }
        else cout<<-1<<"\n";
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

