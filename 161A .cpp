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
ll a[N],b[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll x,y;
    cin>>n>>m>>x>>y;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    l=1,r=1;
    while(l<=n&&r<=m)
    {
        k=a[l]-x;
        q=a[l]+y;
        if(b[r]<=q&&b[r]>=k)
        {
            mp[l]=r;
            l++;
            r++;
        }
        else
        {
            if(b[r]>q)
            {
                l++;
            }
            else
            {
                r++;
            }
        }
    }
    cout<<mp.size()<<"\n";
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<"\n";
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


