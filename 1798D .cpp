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
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    vector<ll>v,po,ne,ans;
    cin>>n;
    set<ll>s;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        s.insert(aarray[i]);
        if(aarray[i]<0)
        {
            ne.push_back(aarray[i]);
        }
        else
        {
            po.push_back(aarray[i]);
        }

    }
    if(s.size()==1||po.size()==n)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    cout<<"YES"<<"\n";
    sort(ne.rbegin(),ne.rend());
    sort(po.begin(),po.end());
    ll psum=0;
    ll nsum=0;
    psum+=po.back();
    ans.push_back(po.back());
    po.pop_back();
    while(1)
    {
        if(ne.size()==0&&po.size()==0)
        {
            break;
        }
        if(po.size()&&ne.size()==0)
        {
            while(po.size())
            {
                ans.push_back(po.back());
                po.pop_back();
            }
            break;

        }
        if(po.size()==0&&ne.size())
        {
            while(ne.size())
            {
                ans.push_back(ne.back());
                ne.pop_back();
            }
            break;

        }
        if(nsum+abs(ne.back())<=psum)
        {
            nsum+=abs(ne.back());
            ans.push_back(ne.back());
            ne.pop_back();
        }
        else
        {
            psum+=po.back();
            ans.push_back(po.back());
            po.pop_back();
        }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
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




