///*Bismillahir Rahmanir Rahim***///
///**Author thasin_sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using myset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
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
const long long  maxval=1e18;
const long long minval=-1e18;
typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min

void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>an;
    vector<ll>v;
    cin>>str;
    n=str.size();
    c=0;
    a=str[0]-'a';
    b=str.back()-'a';
    if(a>b)
    {
        for(i=1; i<n; i++)
        {
            if(str[i]<=str[0]&&str[i]>=str.back())
            {
                an.push_back({(str[i]-'a')+1,i+1});
            }
        }
    }
    else
    {
        for(i=1; i<n; i++)
        {
            if(str[i]>=str[0]&&str[i]<=str.back())
            {
                an.push_back({(str[i]-'a')+1,i+1});
            }
        }

    }
    sort(an.begin(),an.end());
    if(a>b)
    {
        if(an.size())
        {
            for(i=(ll)an.size()-1; i>=0; i--)
            {
                v.push_back(an[i].second);
            }
        }
    }
    else
    {
        if(an.size())
        {
            for(i=0; i<an.size(); i++)
            {
                v.push_back(an[i].second);
            }
        }
    }
    ll wt=abs((str[0]-'a')-(str[n-1]-'a'));
    cout<<wt<<" "<<v.size()+1<<"\n";
    cout<<1<<" ";
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<"\n";

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
    //add and subtract

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



