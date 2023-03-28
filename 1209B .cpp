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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t,a[110],b[110],p=1,ans=0;
    cin>>n;
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='1')
        {
            ans++;
            vis[i+1]=1;
        }
        else
            vis[i+1]=0;
    }
    ll g;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        if(i==1)
        {
            g=a[i]+b[i];
        }
        else
        {
            g=__gcd(a[i]+b[i],g);
        }
        p=p*(a[i]+b[i]);
    }
    p/=g;
    for(i=0;i<=1000;i++)
    {
        ll c=0;
        for(j=1;j<=n;j++)
        {
            if(i>=b[j]&&((b[j]-i)%a[j]==0))
            {
                vis[j]=!vis[j];

            }
            if(vis[j])
            {
                c++;
            }
        }
        ans=max(ans,c);
    }
    cout<<ans<<"\n";
    return 0;
}

