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
ll n;
ll maxright[N],maxleft[N];
void solve()
{
    ll i,j,k,m,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    maxleft[1]=maxright[n]=1;
    for(i=2; i<=n; i++)
    {
        if(aarray[i]>aarray[i-1])
        {
            maxleft[i]=maxleft[i-1]+1;
        }
        else
        {
            maxleft[i]=1;
        }
    }
    for(i=n-1; i>=1; i--)
    {
        if(aarray[i]<aarray[i+1])
        {
            maxright[i]=maxright[i+1]+1;
        }
        else
            maxright[i]=1;
    }
    ans=0;
    for(i=1; i<=n; i++)
    {
        if(aarray[i+1]-aarray[i-1]>=2)
        {
            ans=max(ans,maxleft[i-1]+1+maxright[i+1]);
        }
        else
        {
            ans=max(maxright[i+1]+1,ans);
            ans=max(maxleft[i-1]+1,ans);
        }
        //cout<<i<<" "<<ans<<endl;
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


