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
map<ll,vector<pair<ll,ll>>>mp;
vector<pair<ll,pair<ll,ll>>>v,vc;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=i;j<=n;j++)
        {
            sum+=aarray[j];
            mp[sum].push_back({j,i});
        }
    }
    for(auto x:mp)
    {
        sort(x.second.begin(),x.second.end());
        ll p=0;
        for(auto z:x.second)
        {
            if(z.second>p)
            {
                ll sz=vc.size()+1;
                vc.push_back({sz,z});
                p=z.first;

            }

        }
        if(vc.size()>v.size())
        {
            v=vc;
        }
        vc.clear();
    }
    cout<<v.size()<<'\n';
    for(i=0;i<v.size();i++)
    {
        cout<<v[i].second.second<<" "<<v[i].second.first<<'\n';
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
