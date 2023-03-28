///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
///*The goal is to learn from this problem not to solve this problem*///
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
ll magic[2005][2005];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
ll dia1[2005][2005],dia2[2005][2005];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>magic[i][j];
        }
    }
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(dia1[j][i]!=0)
            {
                continue;
            }
            p=i-1;
            r=j+1;
            sum=magic[j][i];
            while(p>=1&&r<=n)
            {
                sum+=magic[r][p];
                p--;
                r++;
            }
            dia1[j][i]=sum;
            p=i-1;
            r=j+1;

            while(p>=1&&r<=n)
            {
                dia1[r][p]=sum;
                p--;
                r++;
            }
        }
    }
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(dia2[j][i]!=0)
            {
                continue;
            }
            sum=magic[j][i];
            p=i+1;
            r=j+1;
            while(r<=n&&p<=n)
            {
                sum+=magic[r][p];
                r++;
                p++;
            }
            dia2[j][i]=sum;
            p=i+1;
            r=j+1;
            while(r<=n&&p<=n)
            {
                dia2[r][p]=sum;
                r++;
                p++;
            }
        }
    }
    ll ma1=0,ma2=0,rr1,rr2,cc1,cc2;
    ll pre1=minval,pre2=minval;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            a=dia1[i][j]+dia2[i][j]-magic[i][j];
            //cout<<i<<" "<<j<<" "<<a<<"\n";
            if((i+j)%2)
            {
                if(pre1<a)
                {
                    pre1=a;
                    rr1=i,cc1=j;
                }
            }
            if((i+j)%2==0)
            {
                if(pre2<a)
                {
                    pre2=a;
                    rr2=i;
                    cc2=j;
                }
            }
        }
    }
    //cout<<pre1<<" "<<pre2<<endl;
    ans=pre1+pre2;
    cout<<ans<<"\n";
    cout<<rr1<<" "<<cc1<<" "<<rr2<<" "<<cc2<<"\n";
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

