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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll a,b,c;
    cin>>a>>b>>c;
    l=max({a,b,c});
    r=min({a,b,c});
    mp.clear();
    mp[a]++;
    mp[b]++;
    mp[c]++;
    if(mp[l]>1)
    {
        if(a==l&&b==l)
        {
            cout<<1<<" "<<1<<" "<<l-c+1<<"\n";
        }
        else if(a==l&&c==l)
        {
            cout<<1<<" "<<l-b+1<<" "<<1<<"\n";

        }
        else
        {
            cout<<l-a+1<<" "<<1<<" "<<1<<"\n";
        }
    }
    else
    {
        if(a==l)
        {
            cout<<0<<" "<<a-b+1<<" "<<a-c+1<<"\n";

        }
        else if(b==l)
        {
            cout<<b-a+1<<" "<<0<<" "<<b-c+1<<"\n";


        }
        else
        {
            cout<<c-a+1<<" "<<c-b+1<<" "<<0<<"\n";

        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

