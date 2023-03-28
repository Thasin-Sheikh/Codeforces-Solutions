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
    cin>>n>>d;
    m=1e18;
    ll miin=1;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        if(i==1)
        {
            a=aarray[i]-1;
            if(a<m)
            {
                m=a,miin=i;
            }
        }
        else
        {

            a=aarray[i]-aarray[i-1]-1;
            if(a<m)
            {
                m=a;
                miin=i;
            }
        }
    }
     if(n==2)
    {
        ans=min(aarray[1]-1,d-aarray[2]-1);
        ans=max(ans,min(aarray[2]-1,d-aarray[2]-1));
        ans=max(ans,min(aarray[1]-1,d-aarray[1]-1));
        p=(aarray[2]+1)/2;
        ans=max(ans,min(p-1,aarray[2]-p-1));
        cout<<max(ans,m)<<"\n";
        return ;
    }
    for(i=1; i<=n; i++)
    {
        if(i!=miin)
        {
            v.push_back(aarray[i]);
        }
    }
    for(i=0; i<v.size(); i++)
    {
        if(i==0)
        {
            sum=max(sum,v[i]-1);
        }
        else
        {
            sum=max(sum,v[i]-v[i-1]);
        }
    }
    sum=max(sum,d-aarray[n]);
    for(i=0; i<v.size(); i++)
    {
     //   cout<<v[i]<<endl;
        if(i==0)
        {
            p=v[i]-1;
        }
        else
        {
            p=(v[i]-v[i-1]);
        }
        if(p==sum)
        {
            vector<ll>aa;
            if(i==0)
            {
                aa.push_back(p/2);
                for(j=0; j<v.size(); j++)
                {
                    aa.push_back(v[j]);
                }
            }
            else
            {
                for(j=0; j<i; j++)
                {
                    aa.push_back(v[j]);
                }
                aa.push_back(v[i-1]+p/2);
                for(j=i; j<v.size(); j++)
                {
                    aa.push_back(v[j]);
                }
            }
            p=1e18;
            for(j=0; j<aa.size(); j++)
            {
                if(j==0)
                {
                    p=min(p,aa[j]-1);

                }
                else
                    p=min(p,aa[j]-aa[j-1]-1);
            }
            m=max(m,p);
            cout<<m<<"\n";
            return ;
        }
    }
    v.push_back(d);
    p=1e18;
    for(j=0; j<v.size(); j++)
    {
        if(j==0)
        {
            p=min(p,v[j]-1);

        }
        else
            p=min(p,v[j]-v[j-1]-1);
    }
    m=max(m,p);
    cout<<m<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

