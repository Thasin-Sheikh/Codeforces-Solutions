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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
//ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
ll hashvalue[1000000+10];
ll pw[1000000+10];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    pw[0]=1;
    ll pr=31;
    n=str.size();
    for(i=1;i<n;i++)
    {
        pw[i]=pr;
        pr*=31;
        pr%=MOD;
    }
    //cout<<n<<"\n";
    for(i=0;i<n;i++)
    {
        hashvalue[i]=((str[i]-'a')+1)*pw[i];
        if(i!=0)
            hashvalue[i]+=hashvalue[i-1];
        hashvalue[i]%=MOD;
        //cout<<i<<" "<<hashvalue[i]<<"\n";
    }
    ans=0;
    ll e;
    for(i=0;i<n-2;i++)
    {
        a=hashvalue[i];
        b=hashvalue[n-1]-hashvalue[n-i-2];
        b+=MOD;
        b%=MOD;
        c=a;
        c*=pw[n-i-1];
        c%=MOD;
        c+=MOD;
        c%=MOD;
        // cout<<i<<" "<<n-i-2<<" "<<hashvalue[i]<<" "<<hashvalue[n-i-2]<<" "<<hashvalue[n-1]<<" "<<c<<" "<<b<<"\n";

        if(c==b)
        {
          //  cout<<1<<" "<<i<<"\n";
            for(j=1,k=i+1;k<n-1;j++,k++)
            {
                d=hashvalue[k]-hashvalue[j-1];
                d+=MOD;
                d%=MOD;
                e=a*pw[j];
                e%=MOD;
                if(e==d)
                {
                    ans=i+1;
                    break;
                }

            }

        }
    }
    if(ans==0)
    {
        cout<<"Just a legend"<<"\n";
        return ;
    }
    for(i=0;i<ans;i++)
    {
        cout<<str[i];
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}
