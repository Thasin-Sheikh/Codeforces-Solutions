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
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll one=0,two=0;
    for(i=1; i<=2*n; i++)
    {
        cin>>aarray[i];
        if(aarray[i]==1)
        {
            one++;
        }
        else one--;
    }
    ll pred=one;
    if(one==0)
    {
        cout<<0<<"\n";
        return ;
    }
    one=two=0;
    for(i=n+1; i<=2*n; i++)
    {
        if(aarray[i]==1)
            one++;
        else one--;
        if(!mp.count(one))
        {
            mp[one]=i;
        }
    }
    one=two=0;
    ans=INT_MAX;
    mp[0]=n;
    for(i=n; i>=1; i--)
    {
        if(aarray[i]==1)
            one++;
        else one--;
        if(mp.count(pred-one))
        {
            ans=min(ans,n-i+1+mp[pred-one]-n);
            //cout<<i<<" "<<ans<<" "<<d<<" "<<mp[d]<<"\n";
        }
    }
    if(mp.count(pred))
    {
        ans=min(ans,mp[pred]-n);
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
        mp.clear();
        solve();
    }

    return 0;
}


