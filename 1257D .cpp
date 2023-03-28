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
ll maxpendurance[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans=0,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        sum=max(sum,aarray[i]);
        maxpendurance[i]=0;
    }
    cin>>m;
    p=0;
    ll power[m+1],endurance[m+1];
    for(i=1; i<=m; i++)
    {
        cin>>power[i]>>endurance[i];
        p=max(p,(ll)power[i]);
        maxpendurance[endurance[i]]=max(maxpendurance[endurance[i]],power[i]);
    }
    if(p<sum)
    {
        cout<<-1<<"\n";
        return ;
    }
    for(i=n-1;i>=1;i--)
    {
        maxpendurance[i]=max(maxpendurance[i],maxpendurance[i+1]);
    }
    ll cnt=0;
    ans=0;
    for(i=1;i<=n;)
    {
        j=i;
        ans++;
        ll ma=0;
        while(1)
        {
            ma=max(ma,aarray[j]);
            if(ma>maxpendurance[j-i+1])
            {
                break;
            }
            j++;
        }
        i=j;
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
