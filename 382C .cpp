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
    set<ll>s;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        v.push_back(l);
        s.insert(l);
    }
    if(n==1)
    {
        cout<<-1<<"\n";
        return ;
    }
    //if(s.size()==1)
    //{
      //  cout<<1<<"\n";
       // cout<<v[0]<<"\n";
        //return ;
    //}
    s.clear();;
    sort(v.begin(),v.end());
    for(i=1; i<n; i++)
    {
        s.insert(v[i]-v[i-1]);
        mp[v[i]-v[i-1]]++;
    }
    if(s.size()>2)
    {
        cout<<0<<"\n";
        return ;
    }
    if(s.size()==1)
    {
        auto it=s.begin();
        ans=1;
        ll kk=v[1]-v[0];
        if(n==2)
        {
            k=v.back()-v[0];
            //kk=k;
            k/=2;
            if(v[0]+k==v.back()-k)
            {
                ans=3;
                cout<<ans<<"\n";
                cout<<v[0]-2*k<<" "<<v[0]+k<<" "<<v[1]+2*k<<"\n";
                return ;
            }
            else ans=2;
            cout<<ans<<"\n";
            cout<<v[0]-kk<<" "<<v.back()+kk<<"\n";
            return ;
        }
        else
        {
            cout<<2<<"\n";
            cout<<v[0]-kk<<" "<<v.back()+kk<<"\n";
            return ;
        }
    }
    else
    {
        auto it=s.begin();
        auto jt=it;
        jt++;
        m=max(*it,*jt);
        if(*it==m)
        {
            p=*jt;
        }
        else p=*it;
        if(mp[m]>1)
        {
            cout<<0<<"\n";
            return ;
        }
        for(i=1; i<n; i++)
        {
            k=v[i]-v[i-1];
            if(k==m)
            {
                if(v[i-1]+p==v[i]-p)
                {
                    cout<<1<<"\n";
                    cout<<v[i-1]+p<<"\n";
                    return ;
                }
                cout<<0<<"\n";

            }
        }

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

