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
    cin>>n;
    ll a[n+1],b[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
    }
    set<ll>s;
    s.insert(a[1]);
    s.insert(b[1]);
    ll c,d;
    c=a[1],d=b[1];
    for(i=2; i*i<=c; i++)
    {
        if(c%i==0)
        {
            s.insert(i);
            while(c%i==0)
            {
                c/=i;
            }
        }
    }
    if(c>1)
    {
        s.insert(c);
    }
    if(a[1]!=b[1])
    {
        for(i=2; i*i<=d; i++)
        {
            if(d%i==0)
            {
                s.insert(i);
                while(d%i==0)
                {
                    d/=i;
                }
            }
        }
    }
    if(d>1)
    {
        s.insert(d);
    }
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        ll c=1;
        for(j=2; j<=n; j++)
        {
            if(a[j]%(*it)==0||b[j]%(*it)==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            cout<<(*it)<<"\n";
            return;
        }
    }
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


