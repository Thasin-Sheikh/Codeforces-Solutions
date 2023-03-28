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
ll l[N],r[N];
void solve()
{
    ll i,j,k,m,n,q,ans,sum=0,mi=INT_MAX,ma=INT_MIN;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    ll in;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mi=min(mi,aarray[i]);
        ma=max(ma,aarray[i]);
    }
    ans=ma-mi;
    for(i=1; i<=m; i++)
    {
        cin>>l[i]>>r[i];
    }
    for(i=1; i<=n; i++)
    {
        ll ex[n+1]= {0};
        vector<ll>cur;
        for(j=1; j<=m; j++)
        {
            if(l[j]<=i&&i<=r[j])
            {
                cur.push_back(j);
                for(k=l[j]; k<=r[j]; k++)
                {
                    ex[k]--;

                }

            }
        }
        mi=INT_MAX,ma=INT_MIN;
        for(j=1; j<=n; j++)
        {
            mi=min(mi,aarray[j]+ex[j]);
            ma=max(ma,aarray[j]+ex[j]);
        }
        // cout<<ma<<" "<<mi<<endl;
        if(ma-mi>ans)
        {
            ans=ma-mi;
            v=cur;
        }
    }
    cout<<ans<<"\n";
    cout<<v.size()<<"\n";
    for(auto i:v)
    {
        cout<<i<<" ";
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
