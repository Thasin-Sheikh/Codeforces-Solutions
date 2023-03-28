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
map<char,vector<ll>>ma,mb;
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str,a,b;
    bool yes=true;
    vector<pair<ll,ll>>ans;
    cin>>n;
    cin>>a>>b;
    for(i=0; i<n; i++)
    {
        ma[a[i]].push_back(i+1);
        mb[b[i]].push_back(i+1);
    }
    for(char c='a'; c<='z'; c++)
    {
        while(ma[c].size()>0&&mb[c].size()>0)
        {
            ans.push_back({ma[c].back(),mb[c].back()});
            ma[c].pop_back();
            mb[c].pop_back();

        }
    }
    for(char c='a'; c<='z'; c++)
    {
        while(ma['?'].size()>0&&mb[c].size()>0)
        {
            ans.push_back({ma['?'].back(),mb[c].back()});
            ma['?'].pop_back();
            mb[c].pop_back();

        }
        while(ma[c].size()>0&&mb['?'].size()>0)
        {
            ans.push_back({ma[c].back(),mb['?'].back()});
            ma[c].pop_back();
            mb['?'].pop_back();

        }
    }
    while(ma['?'].size()>0&&mb['?'].size()>0)
    {
        ans.push_back({ma['?'].back(),mb['?'].back()});
        ma['?'].pop_back();
        mb['?'].pop_back();
    }
    cout<<ans.size()<<"\n";
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<'\n';
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
