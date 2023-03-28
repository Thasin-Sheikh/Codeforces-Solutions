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
void solve()
{
    ll i,j,n,m;
    dl ans,have;
    cin>>n>>m;
    ll a[m+1];
    dl b[m+1];
    ll p=-1;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        if(aarray[i]!=i)
        {
            p=i;
        }
    }
    for(i=1;i<=m;i++)
    {
        cin>>a[i]>>b[i];
    }
    if(p==-1)
    {
        cout<<1<<"\n";
        return ;
    }
    vector<dl>v;
    for(i=1;i<=m;i++)
    {
        if(a[i]>=p||a[i]==n)
        {
            v.push_back(b[i]);

        }
    }
    ans=0;
    have=1;
    /*for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }*/
    for(i=0;i<v.size();i++)
    {
        ans+=have*v[i];
        dl aa=1-v[i];
        have*=aa;
    }
    cout<<setprecision(10)<<ans<<"\n";

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
        solve();
    }

    return 0;
}
