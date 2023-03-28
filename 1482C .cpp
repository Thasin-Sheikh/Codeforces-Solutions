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
const long maxn=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
vector<ll>v[N];
ll ans[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    cin>>n>>m;
    vector<pair<ll,ll>>vp;
    mp.clear();
    for(i=1;i<=m;i++)
    {
        v[i].clear();
        ans[i]=0;
    }
    for(i=1;i<=m;i++)
    {
        cin>>k;
        for(j=1;j<=k;j++)
        {
            cin>>l;
            v[i].push_back(l);
        }
        vp.push_back({k,i});
    }
    sort(vp.begin(),vp.end());
    for(i=0;i<vp.size();i++)
    {
        l=vp[i].first;
        r=vp[i].second;
        for(j=0;j<v[r].size();j++)
        {
            k=v[r][j];
            //cout<<k<<" "<<mp[k]<<endl;
            if(mp[k]<((m+1)/2))
            {
                ans[r]=k;
                mp[k]++;
                break;
            }
        }

    }
    for(i=1;i<=m;i++)
    {
        if(ans[i]==0)
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    cout<<"YES"<<"\n";
    for(i=1;i<=m;i++)
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
    //no test case in interactive ,check it idiot
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

