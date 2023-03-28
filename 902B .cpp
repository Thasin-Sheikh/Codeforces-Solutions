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
map<ll,ll>mp;
vector<ll>v[N];
vector<ll>len;
ll b[N];
ll c[N];
ll ans=0;
queue<ll>q;
void cc()
{
    while(q.size()>0)
    {
        ll n=q.front();
        vis[n]=-1;
        for(ll i=0; i<v[n].size(); i++)
        {
            if(vis[v[n][i]]==0)
            {
                q.push(v[n][i]);
                if(b[n]!=b[v[n][i]])
                {
                    ans++;
                }
            }
        }
        q.pop();
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,a,k,t;
    cin>>n;
    for(i=2; i<=n; i++)
    {
        cin>>a;
        v[i].push_back(a);
        v[a].push_back(i);

    }
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    q.push(1);
    cc();
    cout<<ans+1<<"\n";
}

