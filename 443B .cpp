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
    vector<ll>v;
    cin>>str;
    cin>>n;
    ans=0;
    p=str.size();
    if(p<=n)
    {
        c=n+p;
        if(c%2)
        {
            c--;
        }
        cout<<c<<"\n";
        return ;
    }
    a=p;
    if(p%2)
    {
        a--;
    }
    for(i=2; i<=a; i+=2)
    {
        //cout<<i<<endl;
        for(j=0; j<p; j++)
        {
            if(j+i-1<p)
            {
                ll cur=i/2;
                l=j+i-1;
                ll f=1;
                for(k=j;k<=l;k++)
                {
                    if(k+cur<=l)
                    {
                        if(str[k]!=str[k+cur])
                        {
                            f=0;
                            break;

                        }
                    }
                }
                if(f)
                {
                    ans=i;
                    break;
                }

            }
            //cout<<i<<" "<<j<<" "<<ans<<endl;
        }
        //cout<<i<<" "<<ans<<"\n";
    }
    for(i=p-1; i>=0; i--)
    {
        if(p-i<=n)
        {
            c=n+p-i;
            if(c%2)
            {
                c--;
            }
            ans=max(ans,c);
        }
        else if((n+(p-i))%2==0)
        {
            ll cur=n+(p-i);
            cur/=2;
            ll f=1;
            for(j=i; j<p; j++)
            {
                if(j+cur<p)
                {
                    if(str[j]!=str[j+cur])
                    {
                        f=0;
                        break;
                    }
                }
            }
            if(f)
            {
                //cout<<i<<" "<<cur<<endl;
                ans=max(ans,n+p-i);
            }
        }
        //cout<<i<<" "<<ans<<"\n";
    }
    cout<<ans<<"\n";
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

