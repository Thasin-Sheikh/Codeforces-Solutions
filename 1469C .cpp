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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    if(n==2)
    {
        l=min(aarray[1],aarray[2]);
        r=max(aarray[2],aarray[1]);
        if(l+m<=r)
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";
        }
        return ;
    }
    ll fmin,fmax,lmin,lmax;
    fmin=aarray[1];
    fmax=aarray[1];
    lmin=aarray[n];
    lmax=aarray[n];
    ll curmin,curmax;
    for(i=2;i<=n;i++)
    {
        curmin=max(aarray[i],fmin-m+1);
        curmax=min(aarray[i]+m-1,fmax+m-1);
        if(curmax<curmin)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        fmin=curmin;
        fmax=curmax;
    }
    if(fmin>lmin)
    {
        cout<<"NO"<<"\n";
        return ;
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


