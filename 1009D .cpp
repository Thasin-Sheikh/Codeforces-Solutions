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
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<pair<ll,ll>,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    vector<pair<ll,ll>>ans;
    if(m<n-1)
    {
        cout<<"Impossible"<<"\n";
        return ;
    }
    for(i=1; i<n; i++)
    {
        ans.push_back({i,i+1});
        mp[ {i,i+1}]++;
        mp[ {i+1,i}]++;
    }
    for(i=3; i<=n; i++)
    {
        ans.push_back({1,i});
        mp[ {1,i}]++;
        mp[ {i,1}]++;
    }
    if(ans.size()<m)
    {
        ll f=0;
        for(i=2; i<=n; i++)
        {
            for(j=i; j<=n; j++)
            {
                if(__gcd(i,j)==1&&mp[ {i,j}]==0)
                    ans.push_back({i,j});
                if(ans.size()==m)
                {
                    f=1;
                    break;
                }
            }
            if(f)
            {
                break;
            }
        }
    }
    if(ans.size()<m)
    {
        cout<<"Impossible"<<"\n";
        return;
    }
    cout<<"Possible"<<"\n";
    for(i=0; i<m; i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
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


