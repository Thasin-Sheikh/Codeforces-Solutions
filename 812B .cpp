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
map<ll,ll>mp,pp;
ll ans[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>aarray[i];
    }
    if(m==1)
    {
        for(i=1; i<=n; i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        return ;
    }
    for(i=1; i<=m-1; i++)
    {
        if(aarray[i+1]>aarray[i])
        {
            k=aarray[i+1]-aarray[i];
        }
        else
        {
            k=(n-aarray[i])+aarray[i+1];
        }
        if(ans[aarray[i]]!=0&&ans[aarray[i]]!=k)
        {
            cout<<-1<<"\n";
            return ;
        }
        ans[aarray[i]]=k;
    }
    for(i=1;i<=n;i++)
    {
        mp[ans[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if(mp[i]==0)
        {
            v.push_back(i);
        }
    }
    //cout<<v.size()<<endl;
    for(i=1;i<=n;i++)
    {
        if(ans[i]==0)
        {
            ans[i]=v.back();
            v.pop_back();
        }
    }
    set<ll>ss;
    for(i=1;i<=n;i++)
    {
        ss.insert(ans[i]);
    }
    if(ss.size()!=n)
    {
        cout<<-1<<"\n";
        return ;
    }
    for(i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
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
