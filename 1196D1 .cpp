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
string str;
ll n;
ll ok(ll k,string a)
{
    ll co=0;
    ll ans=INT_MAX;
    ll i;
    for(i=0;i<k;i++)
    {
        if(a[i]==str[i])
        {
            mp[i]=0;
        }
        else
        {
            mp[i]=1;
            co++;
        }
    }
    ans=min(ans,co);
    for(i=k;i<n;i++)
    {
        if(str[i]==a[i])
        {
            mp[i]=0;
        }
        else
        {
            mp[i]=1;
            co++;
        }
        if(mp[i-k])
        {
            co--;
        }
        ans=min(ans,co);
    }
    return ans;
}
void solve()
{
    ll i,j,k,m,l,r,q,ans,sum=0;
    string s1,s2,s3;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    cin>>str;
    string a,b,c;
    s1="RGB";
    s2="GBR";
    s3="BRG";
    while(a.size()<n)
    {
        a+=s1;
        b+=s2;
        c+=s3;
    }
    mp.clear();
    ans=INT_MAX;
    ans=min(ans,ok(k,a));
   // cout<<ans<<endl;
    mp.clear();
    ans=min(ans,ok(k,b));
    //cout<<ans<<endl;
    mp.clear();
    ans=min(ans,ok(k,c));
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
