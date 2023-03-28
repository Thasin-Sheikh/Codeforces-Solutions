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
    string str;
    bool yes=true;
    vector<ll>v,o;
    cin>>n>>k;
    ans=0;
    sum=k;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        o.push_back(l);

    }
    sort(o.begin(),o.end());
    for(i=0;i<o.size();i++)
    {
        if(o[i]<sum)
        {
            sum+=o[i]/2;
        }
        else v.push_back(o[i]),ma=max(ma,o[i]);
    }
    sort(v.begin(),v.end());
    if((ll)v.size()==0)
    {
        cout<<n<<"\n";
        return ;
    }
    if(sum*3>ma)
    {
        cout<<n<<"\n";
        return ;
    }
    vector<ll>dhur;
    dhur.push_back(2);
    dhur.push_back(2);
    dhur.push_back(3);
    do
    {
        vector<ll>cur=v;
        vector<ll>a1,a2;
        a=sum*dhur[0];

        //cout<<a<<" ";
        for(i=0; i<cur.size(); i++)
        {
            if(cur[i]>=a)
            {
                a1.push_back(cur[i]);
            }
            else a+=cur[i]/2;
        }
         // cout<<a1.size()<<" ";
        if(a1.size())
        {

            a*=dhur[1];
            for(i=0; i<a1.size(); i++)
            {
                if(a1[i]>=a)
                {
                    a2.push_back(a1[i]);
                }
                else a+=a1[i]/2;
            }
        }
 // cout<<a<<" ";
// cout<<a2.size()<<" ";
        vector<ll>a3,a4;
        if(a2.size())
        {
            a*=dhur[2];

            for(i=0; i<a2.size(); i++)
            {
                if(a2[i]>=a)
                {
                    a3.push_back(a2[i]);
                }
                else a+=a2[i]/2;
            }
        }
          //cout<<a<<" ";
          //cout<<a3.size()<<"\n";
        for(i=0; i<a3.size(); i++)
        {
            if(a3[i]>=a)
            {
                a4.push_back(a3[i]);
            }
            else a+=a3[i]/2;
        }
          //cout<<a<<" "<<"\n";
        ans=max(ans,n-(ll)a4.size());
        //cout<<dhur[0]<<" "<<dhur[1]<<" "<<a4.size()<<" "<<ans<<"\n";



    }
    while(next_permutation(dhur.begin(),dhur.end()));
    cout<<ans<<"\n";
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




