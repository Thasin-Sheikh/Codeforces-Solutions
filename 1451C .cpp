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
    ll i,j,n,k,ans,sum=0;
    string a,b;
    ll cnta[30]={0},cntb[30]={0};
    cin>>n>>k;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    sort(a.begin(),a.end());
    for(i=0;i<n;i++)
    {
        cnta[a[i]-'a']++;
        cntb[b[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        ll p=cnta[i]-cntb[i];
        if(p%k)
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    cout<<"YES"<<"\n";
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
