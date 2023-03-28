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
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>v,ans;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        vis[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            vector<ll>vua;
            ll p=i;
            while(vis[p]==0)
            {
                vua.push_back(p);
                vis[p]=1;
                p=aarray[p];
            }
            for(auto it:vua)
            {
                mp[it]=vua.size();
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        cout<<mp[i]<<" ";
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
