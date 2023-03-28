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
ll n;
void  bs(ll l,ll h)
{
    ll sum=0,i;
    for(i=l; i<=h; i++)
    {
        sum+=aarray[i];
    }
    mp[sum]++;
    ll mid=(aarray[l]+aarray[h])/2;
    ll cur=-1;
    for(i=l; i<=h; i++)
    {
        if(aarray[i]<=mid)
        {
            cur=i;
        }
        else break;
    }
    if(cur==-1||cur==h)
    {
        return ;
    }
    bs(l,cur);
    bs(cur+1,h);
}
void solve()
{
    ll i,j,k,q,r,ans,sum=0;
    cin>>n>>q;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    sort(aarray+1,aarray+n+1);
    bs(1,n);
    while(q--)
    {
        cin>>r;
        ll f=1;
        if(mp[r])
        {
            cout<<"Yes"<<"\n";
        }
        else cout<<"No"<<"\n";
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
    cin>>t;
    while(t--)
    {
        mp.clear();
        solve();
    }

    return 0;
}
