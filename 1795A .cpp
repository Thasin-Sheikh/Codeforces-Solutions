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
typedef tree<ll ,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
//int dx[] = {-1 , 0 , 1 , 0};
//int dy[] = {0 , 1 , 0 , -1};
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str,s1,s2;
    bool yes=true;
    vector<ll>v;
    cin>>a>>b;
    cin>>s1>>s2;
    ll s1a=0,s1b=0;
    b=0,r=0;
    for(i=0;i<a-1;i++)
    {
        if(s1[i]!=s1[i+1])
        {
            if(s1[i]=='B')
            {
                b++;
            }
            else r++;
            s1a++;
        }
    }
    for(i=0;i<b-1;i++)
    {
        if(s2[i]!=s2[i+1])
        {
            if(s2[i]=='B')
            {
                b++;
            }
            else r++;
            s1a++;
            s1b++;
        }
    }
    if(s1a==0&&s1b==0)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    if(s1a&&s1b)
    {
    cout<<"NO"<<"\n";
    return ;
    }
    if(s1a)
    {
        if(b)
        {
            if(s2.back()!='R')
            {
                cout<<"NO"<<"\n";
                return ;
            }
        }
        else
        {
            if(s2.back()!='B')
            {
                cout<<"NO"<<"\n";
                return ;
            }

        }
    }
    else
    {
        if(b)
        {
            if(s1.back()!='R')
            {
                cout<<"NO"<<"\n";
                return ;
            }
        }
        else
        {
            if(s1.back()!='B')
            {
                cout<<"NO"<<"\n";
                return ;
            }

        }

    }
    cout<<"YES"<<"\n";
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




