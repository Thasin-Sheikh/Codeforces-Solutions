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
const long N = 3e5 + 10;
const long maxn=5e5+10;
const long long  maxval=1e18;
const long long minval=-1e18;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>jor,bejor;
    cin>>n>>k>>p;
    a=0,b=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        if(aarray[i]%2)
        {
            a++;
            bejor.push_back(aarray[i]);
        }
        else b++,jor.push_back(aarray[i]);
    }
    if(a<k-p)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    a-=(k-p);
    if(a%2)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    if((b+a/2)<p)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    ll odd=k-p;
    ll cur=0;
    if(p)
    {
        //cout<<p<<endl;
        m=min(p,(ll)jor.size());
        p-=m;
        while(m--)
        {
            ed[cur].push_back(jor.back());
            jor.pop_back();
            cur++;
        }
        if(p)
        {
        //    cout<<p<<endl;
            while(p--)
            {
                ed[cur].push_back(bejor.back());
                bejor.pop_back();
                ed[cur].push_back(bejor.back());
                bejor.pop_back();
                cur++;

            }
        }
    }
    if(odd)
    {
        for(i=1; i<=odd; i++)
        {
            ed[cur].push_back(bejor.back());
            cur++;
            bejor.pop_back();
        }
    }
    //cout<<cur<<endl;
    if((ll)jor.size()>0)
    {
        while((ll)jor.size())
        {
            ed[cur-1].push_back(jor.back());
            jor.pop_back();
        }
    }
    if((ll)bejor.size()>0)
    {
        while((ll)bejor.size())
        {
            ed[cur-1].push_back(bejor.back());
            bejor.pop_back();
        }
    }
    cout<<"YES"<<"\n";
    //cout<<cur<<endl;
    for(i=0; i<cur; i++)
    {
        cout<<ed[i].size()<<" ";
        for(j=0; j<ed[i].size(); j++)
        {
            cout<<ed[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
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

