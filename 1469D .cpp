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
    vector<pair<ll,ll>>v;
    cin>>n;
    if(n==3)
    {
        cout<<2<<"\n";
        cout<<3<<" "<<2<<"\n";
        cout<<3<<" "<<2<<"\n";
        return ;
    }
    else if(n==4)
    {
        cout<<3<<"\n";
        cout<<3<<" "<<4<<"\n";
        cout<<4<<" "<<2<<"\n";
        cout<<4<<" "<<2<<"\n";
        return ;
    }
    else if(n==5)
    {
        cout<<5<<"\n";
        cout<<3<<" "<<5<<"\n";
        cout<<4<<" "<<5<<"\n";
        cout<<5<<" "<<2<<"\n";
        cout<<5<<" "<<2<<"\n";
        cout<<5<<" "<<2<<"\n";
        return ;
    }
    else if(n<=15)
    {
        for(i=3; i<=n-1; i++)
        {
            if(i!=5)
            {
                v.push_back({i,n});
            }
        }
        ll end=n;
        while(n>1)
        {
            k=n/5;
            v.push_back({end,5});
            if(n%5)
            {
                k++;
            }
            n=k;
        }
        v.push_back({5,2});
        v.push_back({5,2});
        v.push_back({5,2});
    }
    else
    {
        for(i=3; i<=n-1; i++)
        {
            if(i!=15)
            {
                v.push_back({i,n});
            }
        }
        ll end=n;
        while(n>1)
        {
            k=n/15;
            v.push_back({end,15});
            if(n%15)
            {
                k++;
            }
            n=k;
        }
        v.push_back({15,2});
        v.push_back({15,2});
        v.push_back({15,2});
        v.push_back({15,2});
    }
    cout<<v.size()<<"\n";
    for(auto it:v)
    {
        cout<<it.first<<" "<<it.second<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


