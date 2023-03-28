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
    ll i,j,k,m,n,l,r,a,b,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m>>a>>b;
    for(i=1;i<=m;i++)
    {
        cin>>l;
        v.push_back(l);
    }
    sort(v.begin(),v.end());
    k=abs(a-b);
    if(a>b)
    {
       k+=(n-a);
       swap(a,b);
    }
    else
    {
        k+=(a-1);
    }
    l=abs(a-b)-2;
    l=min(l,m-1);
    ans=0;
    for(i=l;i>=0;i--)
    {
        if(v[i]<k)
        {
            ans++;
            k--;

        }
    }
    cout<<ans<<"\n";
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
