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
ll ans[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
vector<pair<ll,ll>>mod[N];
void solve()
{
    ll i,j,n,m,k,l,r,sum=0;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mod[aarray[i]%m].push_back({aarray[i],i});
    }
    ll tt=2;
    vector<pair<ll,ll>>f;
    ll same=n/m;
    while(tt--)
    {
        for(i=0; i<m; i++)
        {
            while(mod[i].size()>same)
            {
                f.push_back(mod[i].back());
                mod[i].pop_back();
            }
                while(mod[i].size()<same&&f.size()>0)
                {
                    pair<ll,ll>hu;
                    hu=f.back();
                    f.pop_back();
                    ll k=hu.first;
                    ll x=k%m;
                    if(x<i)
                    {
                        mod[i].push_back({k+i-x,hu.second});
                    }
                    else
                    {
                        mod[i].push_back({k+i+m-x,hu.second});
                    }
                }
        }
    }
    for(j=0; j<m; j++)
    {
        for(auto y:mod[j])
        {
            ans[y.second]=y.first;

        }
    }
    ll dhur=0;
    for(i=1; i<=n; i++)
    {
        dhur+=ans[i]-aarray[i];
    }
    cout<<dhur<<"\n";
    for(i=1; i<=n; i++)
    {
        cout<<ans[i]<<" ";
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

