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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll pre[N];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,q,k,t;
    cin>>n>>q;
    vector<ll>a,b;
    for(i=1; i<=n; i++)
    {
        cin>>m;
        a.push_back(m);
    }
    sort(a.begin(),a.end());
    ll l,r;
    while(q--)
    {
        cin>>l>>r;
        pre[l]++;
        pre[r+1]--;
    }
    for(i=1;i<=n;i++)
    {
        pre[i]+=pre[i-1];
        b.push_back(pre[i]);
    }
    sort(b.begin(),b.end());
    ll ans=0;
    while(b.size()>0)
    {
        k=b.back();
        k*=a.back();
        a.pop_back();
        b.pop_back();
        ans+=k;

    }
    cout<<ans<<"\n";
    return 0;
}

