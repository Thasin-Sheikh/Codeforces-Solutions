///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
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
const long N = 2e5 + 10;
const long maxn=5e5+10;
const long long  maxval=1e18;
const long long minval=-1e18;
//ll aarray[N];
//ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//maxheap
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    priority_queue<ll>pq;
    multiset<ll>ms;
    ll ma=0;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        sum+=l;
        ms.insert(l);
    }
    if(n==1)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    pq.push(sum);
    while((ll)pq.size())
    {
        a=pq.top();
        pq.pop();
        // cout<<a<<endl;
        p=*--ms.end();
       // cout<<a<<" "<<p<<endl;
        if(p>a)
        {
            cout<<"NO"<<"\n";
            return ;
        }
        if((ll)ms.size()>0&&ms.find(a)!=ms.end())
        {
            ms.erase(ms.find(a));
        }
        else if(a==1)
        {
            continue;
        }
        else
        {
            b=a/2;
            c=b;
            if(a%2)
            {
                c++;
            }
            pq.push(b);
            pq.push(c);
        }
    }
    if((ll)ms.size()==0&&(ll)pq.size()==0)
        cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";


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
