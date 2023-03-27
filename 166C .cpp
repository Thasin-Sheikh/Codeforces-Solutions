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
ll vis[N];
map<ll,ll>mp;
vector<ll>v[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>k;
    vector<ll>cur;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];

    }
    sort(aarray+1,aarray+n+1);
    ll mid=(n+1)/2;
    if(aarray[mid]==k)
    {
        cout<<0<<"\n";
        return ;
    }
    ans=0;
    sort(cur.begin(),cur.end());
    if(k>cur.back())
    {
        cout<<n+1<<"\n";
        return ;
    }
    if(sum==0)
    {
        cur.push_back(k);
        n++;
        ans=1;
    }
    sort(cur.begin(),cur.end());
    while(1)
    {
        l=lower_bound(cur.begin(),cur.end(),k)-cur.begin();
        r=upper_bound(cur.begin(),cur.end(),k)-cur.begin();
      // cout<<l<<" "<<r<<endl;
        r--;
        p=(n+1)/2;
        p--;
        if(p>=l&&p<=r)
        {
            break;
        }
        else
        {
            ans++;
            n++;
            cur.push_back(k);
            sort(cur.begin(),cur.end());
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


