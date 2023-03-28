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
//priority_queue<ll>pq;// from max to min
 vector<pair<ll,ll>>ans;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v,in;
    ans.clear();
    multiset<ll>ms;
    cin>>n;
    for(i=1; i<=2*n; i++)
    {
        cin>>l;
        v.push_back(l);
        ms.insert(l);
    }
    sort(v.begin(),v.end());
    l=0,r=2*n-1;
    while(l<r)
    {
        ll x=v[l]+v[r];

        ll f=0;
        multiset<ll>curm;
        curm=ms;
        while(curm.size())
        {
            auto it=curm.end();
            it--;
            a=*it;
            b=x-a;
            curm.erase(curm.find(a));
            if(curm.find(b)!=curm.end())
            {
                ans.push_back({b,a});
                curm.erase(curm.find(b));

            }
            else
            {
                f++;
                break;
            }
            x=a;
        }
        if(!f)
        {
            cout<<"YES"<<"\n";
            cout<<v[l]+v[r]<<"\n";
            for(auto it:ans)
            {
                cout<<it.first<<" "<<it.second<<"\n";
            }
            return ;
        }
        else
        {
            ans.clear();
            l++;
        }
    }
    cout<<"NO"<<"\n";
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




