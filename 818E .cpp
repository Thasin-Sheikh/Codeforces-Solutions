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
ll ssum[N],psum[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    psum[1]=aarray[1]%k;
    ssum[n]=aarray[n]%k;
    for(i=2;i<=n;i++)
    {
        psum[i]=(psum[i-1]*aarray[i])%k;
    }
    for(i=n-1;i>=1;i--)
    {
        ssum[i]=(ssum[i+1]*aarray[i])%k;
    }
    ll x=0,y=0;
    set<ll>sx,sy;
    ans=0;
    if(psum[n]==0)
    {
        ans++;
    }
    ll c=0;
    for(i=1;i<n;i++)
    {
        if(ssum[i+1]==0)
        {
            ans++;
        }
    }
    for(i=n;i>1;i--)
    {
        if(psum[i-1]==0)
        {
            sy.insert(n-i+1);
        }
    }
    for(i=1;i<n;i++)
    {
        if(ssum[i+1]==0)
        {
            sx.insert(i);
        }
    }
    for(i=0;i<n;i++)
    {
        r=n-i-1;
        auto it=sy.lower_bound(r);
        if(*it>r)
        {
            if(sy.size()==1)
            {
                continue;
            }
            else
            {
                cout<<i<<" "<<r<<" "<<*it<<endl;
                it--;
                ans+=*it;
            }
        }
        else
        {
            cout<<i<<" "<<r<<" "<<*it<<endl;
            ans+=*it;
        }
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


