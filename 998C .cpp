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
    ll x,y;
    cin>>n>>x>>y;
    cin>>str;
    ll z=0,o=0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='1')
        {
            o++;
        }
        else z++;
    }
    if(z==n)
    {
        cout<<y<<"\n";
        return ;
    }
    if(o==n)
    {
        cout<<0<<"\n";
        return ;
    }
    str+='1';
    z=0;
    for(i=0;i<=n;i++)
    {
        if(str[i]=='0')
        {
            z++;
        }
        else
        {
            if(z)
            {
                sum++;
            }
            z=0;
        }
    }
    str.pop_back();
    str+='0';
    o=0;
    ll s=0;
    for(i=0;i<=n;i++)
    {
        if(str[i]=='1')
        {
            o++;
        }
        else
        {
            if(o)
            s++;
            o=0;
        }
    }
    ll p=y+s*y;
    ans=min(((sum-1)*x+y),y*sum);
    ans=min(ans,p);
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


