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
ll a[1000000],b[1000000];
deque<ll>c,d;
map<vector<ll>,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>t;
    vector<ll>v,cur;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    ll x,y;
    x=v[0],y=v[1];
    pair<ll,ll>p[n+10];
    for(i=1;i<n;i++)
    {
        y=v[i];
        p[i]={x,y};
        cur.push_back(min(x,y));
        x=max(x,y);

    }
    ll l;
    while(t--)
    {
        cin>>l;
        if(l<n)
        {
            cout<<p[l].first<<" "<<p[l].second<<"\n";
        }
        else
        {
            l--;
            l=l%(n-1);
            cout<<x<<" "<<cur[l]<<"\n";
        }
    }
    return 0;
}

