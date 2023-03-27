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
vector<ll>ed[10];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min

void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    ll cnt[10];
    ans=0;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        ans+=l;
        if(l==0)
        {
            sum++;
        }
        vis[l]++;
    }
    if(!sum)
    {
        cout<<-1<<"\n";
        return ;
    }
   // cout<<ans<<"\n";
    if(ans%3)
    {
        if(ans%3==1)
        {
            ll fo=0;
            for(i=1; i<=9; i++)
            {
                if(i%3==1&&vis[i])
                {
                    vis[i]--;
                    fo++;
                    break;
                }
            }
            if(fo==0)
            {
                ll oo=2;
                for(i=1;i<=9;i++)
                {
                    if(i%3==2&&vis[i])
                    {
                        if(vis[i]>=oo)
                        {
                            vis[i]-=oo;
                        }
                        else
                        {
                            oo--;
                            vis[i]--;
                        }
                    }

                }
            }
        }
        else
        {
            ll f=0;
            for(i=1; i<=9; i++)
            {
                if(i%3==2&&vis[i])
                {
                    vis[i]--;
                    f++;
                    break;
                }
            }
            if(f==0)
            {
                ll tw=2;
                for(i=1;i<=9;i++)
                {
                    if(i%3==1&&vis[i])
                    {
                        if(vis[i]>=tw)
                        {
                            vis[i]-=tw;
                        }
                        else
                        {
                            tw--;
                            vis[i]--;
                        }
                    }
                    if(tw==0)
                    {
                        break;
                    }
                }
            }

        }
    }
    for(i=9; i>=1; i--)
    {
        while(vis[i]--)
        {
            str+=i+'0';
        }
    }
    l=vis[0];
    if(str.size()==0)
    {
        if(l)
        {
            str+='0';
        }
    }
    else
    {
        while(l--)
        {
            str+=(0+'0');
        }
    }
    cout<<str<<"\n";
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

