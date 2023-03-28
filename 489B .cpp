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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    vector<ll>b,g;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        b.push_back(k);
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>k;
        g.push_back(k);
    }
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    ll ans=0;
    for(i=0;i<b.size();i++)
    {
        for(j=0;j<g.size();j++)
        {
            if(g[j]==-1)
                continue;
            k=abs(g[j]-b[i]);
            if(k<=1)
            {
                ans++;
                g[j]=-1;
                break;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}

