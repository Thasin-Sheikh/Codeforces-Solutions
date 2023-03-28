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
    cin>>n;
    ll jor=0,bjor=0;

    a=0;
    ll one=0;
    p=0;
    for(i=1; i<=n; i++)
    {

        cin>>aarray[i];
        if(i==1||i==n)
            continue;
        if(aarray[i]%2)
        {
            if(aarray[i]>1)
                a+=aarray[i],p++;
            else one++;
        }
        else sum+=aarray[i];
    }
    jor=sum/2;
    //cout<<jor<<endl;
    if(p>1||(p==1&&jor))
        jor+=a/2;
    else if(p)
        one++;
        //cout<<jor<<" "<<one<<endl;
    if(p==1)
    {
        ll f=0;
        for(i=n/2; i<n-1; i++)
        {
            if(aarray[i]%2==0)
            {
                for(j=i+1; j<n; j++)
                {
                    if(aarray[j]%2)
                    {
                        f++;
                        break;

                    }
                }
                if(f)
                {
                    for(j=i-1; j>1; j--)
                    {
                        if(aarray[j]%2)
                        {
                            f++;
                            break;

                        }
                    }
                }
                break;
            }
        }
        if(f==2)
        {
            one--;
            jor++;
        }
        if(f<2)
        {
            f=0;
            for(i=n/2; i>2; i--)
            {
                if(aarray[i]%2==0)
                {
                    for(j=i+1; j<n; j++)
                    {
                        if(aarray[j]%2)
                        {
                            f++;
                            break;

                        }
                    }
                    if(f)
                    {
                        for(j=i-1; j>1; j--)
                        {
                            if(aarray[j]%2)
                            {
                                f++;
                                break;

                            }
                        }
                    }
                    break;
                }
            }
            if(f==2)
            {
                one--;
                jor++;
            }
        }
    }
    if(jor<one)
    {
        cout<<-1<<"\n";
        return ;
    }
    ans=0;
    for(i=2; i<n; i++)
    {
        ans+=aarray[i]/2;
        if(aarray[i]%2)
            ans++;
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
    //never use pow func directly
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

