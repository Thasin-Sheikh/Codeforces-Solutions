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
ll one[N],zero[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll o=0,z=0;
    ans=0;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        if(aarray[i]==1)
        {
            o++;
        }
        else z++;
    }
    ans=max(o,z);
    if(aarray[n]==1)
    {
        one[n]=1;
    }
    else one[n]=0;
    for(i=n-1;i>=1;i--)
    {
        if(aarray[i]==1)
        {
            one[i]=one[i+1]+1;
        }
        else
            one[i]=one[i+1];
    }
    if(aarray[1]==0)
    {
        zero[1]=1;
    }
    else zero[1]=0;
    for(i=2;i<=n;i++)
    {
        if(aarray[i]==0)
        {
            zero[i]=zero[i-1]+1;
        }
        else
            zero[i]=zero[i-1];

    }
    for(i=1;i<=n;i++)
    {
        if(aarray[i]==0)
        {
            ans=max(ans,zero[i]+one[i]);

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


