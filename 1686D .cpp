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
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    ll ab,ba;
    cin>>a>>b>>ab>>ba;
    cin>>str;
    string sc1,sc2;
    sc1=str;
    sc2=str;
    n=str.size();
    ll curab,curba;
    curab=ab;
    curba=ba;
    for(i=0; i<n-1; i++)
    {
        if(sc1[i]=='A')
        {
            if(sc1[i+1]=='B'&&curab)
            {
                sc1[i]=sc1[i+1]='0';
                curab--;
                i++;
            }
        }
    }
    cout<<sc1<<"\n";
    for(i=0; i<n-1; i++)
    {
        if(sc1[i]=='B')
        {
            if(sc1[i+1]=='A'&&curba)
            {
                sc1[i]=sc1[i+1]='0';
                curba--;
                i++;

            }

        }


    }
    ll aa=0,bb=0;
    for(i=0;i<n;i++)
    {
        if(sc1[i]=='A')
        {
            aa++;
        }
        else if(sc1[i]=='B')
        {
            bb++;
        }
    }
    cout<<sc1<<"\n";
    if(curab==0&&curba==0&&aa==a&&bb==b)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    curba=ba;
    for(i=0; i<n-1; i++)
    {
        if(sc2[i]=='B')
        {
            if(sc2[i+1]=='A'&&curba)
            {
                sc2[i]=sc2[i+1]='0';
                curba--;
                i++;

            }

        }

    }
    cout<<sc2<<"\n";
    curab=ab;
    for(i=0; i<n-1; i++)
    {
        if(sc2[i]=='A')
        {
            if(sc2[i+1]=='B'&&curab)
            {
                sc2[i]=sc2[i+1]='0';
                curab--;
                i++;

            }

        }
    }
    aa=bb=0;
   for(i=0;i<n;i++)
    {
        if(sc2[i]=='A')
        {
            aa++;
        }
        else if(sc2[i]=='B')
        {
            bb++;
        }
    }
    cout<<sc2<<"\n";
    if(curab==0&&curba==0&&aa==a&&bb==b)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    else
    {
        cout<<"NO"<<"\n";
    }
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

