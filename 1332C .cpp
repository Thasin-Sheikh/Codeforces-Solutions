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
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    cin>>str;
    ans=0;
    for(i=0;i<k/2;i++)
    {
        ll cnt[26]={0};
        ll ma=0;
        for(j=0;j+k-1<n;j+=k)
        {
            l=j+i;
            r=j+k-1-i;
            //cout<<i<<" "<<l<<" "<<r<<endl;
            cnt[str[l]-'a']++;
            cnt[str[r]-'a']++;
            ma=max(ma,cnt[str[l]-'a']);
            ma=max(ma,cnt[str[r]-'a']);

        }
        ll tot=2*(n/k);
        ans+=tot-ma;
    }
    //cout<<ans<<endl;
    if(k%2)
    {
        ll cnt[26]={0};
        cnt[str[k/2]-'a']++;
        ll c=k/2;
        ll ma=cnt[str[k/2]-'a'];
        for(i=2;i<=n/k;i++)
        {
            c+=k;
            cnt[str[c]-'a']++;
            ma=max(ma,cnt[str[c]-'a']);
        }
        //cout<<n/k<<" "<<ma<<endl;
        ans+=n/k-ma;
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


