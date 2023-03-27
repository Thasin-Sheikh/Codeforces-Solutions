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
bool check[1000005];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[1000008];
map<ll,ll>mp;
ll k,a,b;
void seive()
{
    ll i,j,k;
    memset(check,true,sizeof(check));
    check[0]=check[1]=false;
    for(i=2;i<=1000000;i++)
    {
        if(check[i])
        {
            for(j=2*i;j<=1000000;j+=i)
            {
                check[j]=false;
            }
        }
    }
    for(i=0;i<=1000000;i++)
    {
        if(check[i])
        {
            vis[i]=vis[i-1]+1;
        }
        else
            vis[i]=vis[i-1];
    }
}
ll bs(ll cur)
{
    ll i,j;
    ll c,d;
    for(i=a;i<=b-cur+1;i++)
    {
        c=i+cur-1;
        d=vis[c]-vis[i-1];
        if(d<k)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll i,j,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    seive();
    cin>>a>>b>>k;
    l=1;r=INT_MAX;
    for(i=1;i<=100;i++)
    {
        m=(l+r)/2;
        if(bs(m))
        {
            //sum++;
            r=m;
        }
        else
            l=m;
    }
    //cout<<sum<<endl;
    if(r<=b-a+1)
    {
        cout<<r<<"\n";
    }
    else
    cout<<-1<<"\n";

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
