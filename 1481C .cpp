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
ll a[N],b[N],c[N];
vector<ll>v[N],ans[N],vc[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    vector<ll>aa;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        v[i].clear();
        vc[i].clear();
    }
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
        ans[i].clear();
        if(a[i]!=b[i])
        {
            vc[b[i]].push_back(i);
            sum++;
        }
        v[b[i]].push_back(i);
        mp[b[i]]++;
    }
    vector<ll>cl;
    ll fl=-1;
    for(i=1; i<=m; i++)
    {
        cin>>c[i];
    }
    if(vc[c[m]].size()>0)
    {
        fl=vc[c[m]].back();
        vc[c[m]].pop_back();
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(b[i]==c[m])
            {
                fl=i;
                break;
            }
        }
    }
    //cout<<sum<<endl;
    if(fl==-1)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    ans[m].push_back(fl);
    for(i=1;i<m;i++)
    {
        if(mp[c[i]]==0)
        {
            ans[i].push_back(fl);
        }
    }
    for(i=1;i<m;i++)
    {

        if(mp[c[i]])
        {
            if(vc[c[i]].size())
            {
                ans[i].push_back(vc[c[i]].back());
                vc[c[i]].pop_back();
            }
            else
            {
                ans[i].push_back(v[c[i]].back());
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]!=b[i])
        {
            if(vc[b[i]].size())
            {
                cout<<"NO"<<"\n";
                return ;
            }
        }
    }
    cout<<"YES"<<"\n";
    for(i=1;i<=m;i++)
    {
        cout<<ans[i].back()<<" ";
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
}
