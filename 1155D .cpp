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
    cin>>n>>m;
    a=0,b=0;
    ll z=0;
    sum=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
        if(aarray[i]==0)
        {
            z++;
        }
        else if(aarray[i]<0)
        {
            a++;
        }
        else b++;
    }
    if(a+z==n)
    {
        if(m>=0)
        {
            cout<<0<<"\n";
            return ;
        }
        else
        {
            sum=0;
            for(i=1; i<=n; i++)
            {
                sum+=aarray[i]*m;

            }
            cout<<sum<<"\n";
            return ;
        }
    }
    if(b+z==n)
    {
        if(m<=0)
        {
            cout<<sum<<"\n";
            return ;
        }
        else
        {
            sum=0;
            for(i=1; i<=n; i++)
            {
                sum+=aarray[i]*m;
            }
            cout<<sum<<"\n";
            return ;

        }
    }
    ll s=-1,e=-1;
    if(m==0)
    {
        sum=0;
        ans=0;
        for(i=1; i<=n; i++)
        {
            sum+=aarray[i];
            if(sum<0)
            {
                sum=0;
            }
            ans=max(ans,sum);
        }
        cout<<ans<<"\n";
        return ;
    }
    else if(m<0)
    {
        sum=0;
        vector<pair<ll,pair<ll,ll>>>cur;
        for(i=1; i<=n; i++)
        {
            sum+=aarray[i];
            if(i==n&&sum<=0)
            {
                e=i;
                cur.push_back({abs(sum),{s,e}}),sum=0,s=e=-1;
            }
            else if(sum<=0)
            {

                if(s==-1)
                {
                    s=e=i;
                }
                else e=i;
            }
            else cur.push_back({abs(sum-aarray[i]),{s,e}}),sum=0,s=e=-1;
        }
        sort(cur.rbegin(),cur.rend());
        //cout<<cur[0].first<<endl;
        a=cur[0].second.first;
        b=cur[0].second.second;
        //cout<<a<<" "<<b<<endl;
        for(i=a; i<=b; i++)
        {
            aarray[i]*=m;
        }
        sum=0;
        ans=0;
        for(i=1; i<=n; i++)
        {
            sum+=aarray[i];
            if(sum<0)
            {
                sum=0;
            }
            ans=max(ans,sum);
        }
        cout<<ans<<"\n";
        return ;
    }
    else
    {
        sum=0;
        vector<pair<ll,pair<ll,ll>>>cur;
        for(i=1; i<=n; i++)
        {
            sum+=aarray[i];
            if(sum>=0&&i==n)
            {
                e=i;
                cur.push_back({(sum),{s,e}}),sum=0,s=e=-1;
            }
            else if(sum>=0)
            {
                if(s==-1)
                {
                    s=e=i;
                }
                else e=i;
            }

            else cur.push_back({(sum-aarray[i]),{s,e}}),sum=0,s=e=-1;
        }
        sort(cur.rbegin(),cur.rend());
        a=cur[0].second.first;
        b=cur[0].second.second;
        for(i=a; i<=b; i++)
        {
            aarray[i]*=m;
        }
        sum=0;
        ans=0;
        for(i=1; i<=n; i++)
        {
            sum+=aarray[i];
            if(sum<0)
            {
                sum=0;
            }
            ans=max(ans,sum);
        }
        cout<<ans<<"\n";
        return ;
    }
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

