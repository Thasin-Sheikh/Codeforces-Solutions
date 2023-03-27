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
ll ssum[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str[50];
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    ans=LLONG_MAX;
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
    }
    for(i=0; i<k; i++)
    {
        v.push_back(i);
    }
    do
    {
        ll b,c=LLONG_MAX,d=LLONG_MIN;
        for(i=1; i<=n; i++)
        {
            string a;
            for(j=0; j<k; j++)
            {
                a+=str[i][v[j]];
            }
            b=stoll(a);
            d=max(d,b);
            c=min(c,b);
        }
        ans=min(ans,d-c);
    }
    while(next_permutation(v.begin(),v.end()));
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


