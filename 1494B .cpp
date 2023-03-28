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
    ll u,d;
    cin>>n;
    cin>>u>>r>>d>>l;
    for(i=0; i<=16; i++)
    {
        ll u1=u,d1=d,l1=l,r1=r;
        if(i&1)
        {
            u1--;
            l1--;
        }
        if(i&2)
        {
            u1--;
            r1--;
        }
        if(i&4)
        {
            d1--;
            r1--;
        }
        if(i&8)
        {
            d1--;
            l1--;
        }
        k=min(d1,min(l1,min(r1,u1)));
        ll p=max(d1,max(l1,max(r1,u1)));
        if(k>=0&&p<=n-2)
        {
            cout<<"YES"<<"\n";
            return ;
        }
    }
    cout<<"NO"<<"\n";


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


