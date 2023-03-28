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
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k>>l;
    ll tot=0;
    for(i=1; i<=n*k; i++)
    {
        cin>>aarray[i];
    }
    sort(aarray+1,aarray+n*k+1);
    for(i=1; i<=n*k; i++)
    {
        if(aarray[i]-aarray[1]<=l)
        {
            tot++;
        }
    }
    for(i=1; i<=n; i++)
    {
        v.push_back(aarray[i]);
    }
    if(v.back()-v[0]>l)
    {
        cout<<0<<"\n";
        return ;
    }
    ll p=1;
    ll f=0;
    //cout<<tot<<endl;
    for(i=1; i<=n; i++)
    {
        sum+=aarray[p];
        // cout<<p<<endl;
        tot--;
        p++;
        for(j=1; j<k; j++)
        {
            if(tot+i>n)
            {
                tot--;
                p++;
            }
            else
                break;
        }

    }
    cout<<sum<<"\n";
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
