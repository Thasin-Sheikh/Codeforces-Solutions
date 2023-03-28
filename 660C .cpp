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
ll zero[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        zero[i]=zero[i-1];
        if(!aarray[i])
        {
            zero[i]++;
        }
    }
    l=0,r=0;
    j=0;
    for(i=1;i<=n;i++)
    {
        j=max(i,j);
        while(j<=n&&zero[j]-zero[i-1]<=k)
        {
            j++;
        }
        j--;
        p=j-i+1;
        if(p>sum)
        {
            sum=p;
            l=i,r=j;
        }
        cout<<i<<" "<<j<<" "<<sum<<endl;
    }
    cout<<sum<<"\n";
    for(i=1;i<=n;i++)
    {
        if(aarray[i])
        {
            cout<<1<<" ";
        }
        else if(i<=r&&i>=l)
        {
            cout<<1<<" ";
        }
        else cout<<0<<" ";
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


