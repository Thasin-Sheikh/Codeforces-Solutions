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
vector<ll>red,green,blue;
ll ans=4e18;
void getans(vector<ll>red,vector<ll>green,vector<ll>blue,ll nr,ll ng,ll nb)
{
    ll i,j,a,b,c;
    for(i=0;i<nr;i++)
    {
        a=red[i];
        b=lower_bound(green.begin(),green.end(),a)-green.begin();
        c=upper_bound(blue.begin(),blue.end(),a)-blue.begin();
        if(b==ng||c==0)
        {
            continue;
        }
        b=green[b];
        c=blue[c-1];
        ll d;
        d=(a-b)*(a-b)+(b-c)*(b-c)+(a-c)*(a-c);
        ans=min(ans,d);
    }

}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll nr,nb,ng;
    ans=4e18;
    cin>>nr>>ng>>nb;
    red.clear();
    green.clear();
    blue.clear();
    for(i=1;i<=nr;i++)
    {
        cin>>l;
        red.push_back(l);
    }
    for(i=1;i<=ng;i++)
    {
        cin>>l;
        green.push_back(l);
    }
    for(i=1;i<=nb;i++)
    {
        cin>>l;
        blue.push_back(l);
    }
    sort(red.begin(),red.end());
    sort(green.begin(),green.end());
    sort(blue.begin(),blue.end());
    getans(red,green,blue,nr,ng,nb);
    getans(red,blue,green,nr,nb,ng);
    getans(green,red,blue,ng,nr,nb);
    getans(green,blue,red,ng,nb,nr);
    getans(blue,red,green,nb,nr,ng);
    getans(blue,green,red,nb,ng,nr);
    cout<<ans<<"\n";

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

