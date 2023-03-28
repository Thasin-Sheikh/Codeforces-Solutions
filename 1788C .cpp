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
typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;

vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
//int dx[] = {-1 , 0 , 1 , 0};
//int dy[] = {0 , 1 , 0 , -1};
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction


//priority_queue<ll>pq;// from max to min
ll cnt[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v;
    vector<pair<ll,ll>>vp;
    cin>>n;
    for(i=1; i<=2*n; i++)
    {
        cnt[i]=0;
    }
    if(n%2==0)
    {
        cout<<"NO"<<"\n";
        return;
    }
    a=n*2+1;
    a-=(n/2);
    for(i=a; i<=n*2+1; i++)
    {
        v.push_back(i);
    }
    c=n/2+(n*2)+1;
    for(i=(n*2)+2; i<=c; i++)
    {
        v.push_back(i);
    }
    vp.push_back({1,2*n});
    l=n/2-1;
    r=n/2+1;
    ll cur=1;
    /*for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }*/
    cnt[1]=cnt[2*n]=1;
    for(i=2; i<=2*n; i++)
    {
        if(cnt[i])
        {
            continue;
        }
        if(cur%2&&l>=0)
        {
            vp.push_back({i,v[l]-i});
            cnt[i]=cnt[v[l]-i]=1;
            l--;
        }
        else if(r<n)
        {
            vp.push_back({i,v[r]-i});
            cnt[i]=cnt[v[r]-i]=1;
            r++;

        }
        cur++;
    }
    cout<<"YES"<<"\n";
    for(i=0; i<vp.size(); i++)
    {
        cout<<vp[i].first<<" "<<vp[i].second<<"\n";
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




