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
ll onsum[N],offsum[N],susum[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    v.push_back(0);
    for(i=1; i<=n; i++)
    {
        cin>>l;
        v.push_back(l);
    }
    v.push_back(m);
    for(i=0; i<v.size()-1; i+=2)
    {
        sum+=v[i+1]-v[i];
    }
    ans=sum;
    for(i=1; i<v.size(); i++)
    {
        if(i%2)
        {
            onsum[i]=v[i]-v[i-1]+onsum[i-1];
            offsum[i]=offsum[i-1];
        }
        else
        {
            offsum[i]=v[i]-v[i-1]+offsum[i-1];
            onsum[i]=onsum[i-1];
        }
    }
    for(i=1; i<v.size(); i++)
    {
        susum[i]=offsum[v.size()-1]-offsum[i];
    }
    for(i=1; i<v.size(); i++)
    {
        if(i%2)
        {
            if(i==0)
            {
                k=v[i]-1;
                if(k==0)
                    continue;
                k+=susum[i];
                ans=max(ans,k);
            }
            else
            {
                k=v[i]-1;
                if(k==v[i-1])
                    continue;
                ll s;
                s=onsum[i-1];
                s+=k-v[i-1];
                s+=susum[i];
                ans=max(ans,s);
            }

        }
        else
        {
            ll s=onsum[i-1];
            k=v[i-1]+1;
            s+=v[i]-k;
            s+=susum[i];
            ans=max(ans,s);
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


