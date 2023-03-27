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
typedef tree<ll ,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
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
    string str,s1,s2;
    bool yes=true;
    vector<char>v;
    cin>>n>>k;
    cin>>s1>>s2;
    if(s1==s2)
    {
        cout<<((n+1)*n)/2<<"\n";
        return ;
    }
    set<char>st;
    for(i=0;i<s1.size();i++)
    {
        st.insert(s1[i]);
    }
    ll sz=st.size();
    if(sz<=k)
    {
        cout<<((n+1)*n)/2<<"\n";
        return ;
    }
    ans=0;
    for(auto it:st)
    {
        v.push_back(it);
    }
    ans=0;
    for(i=0;i<(1LL<<sz);i++)
    {
        sum=0;
        ll cnt[26];
        for(j=0;j<26;j++)
        {
            cnt[j]=0;
        }
        for(j=0;j<sz;j++)
        {
            if(i&(1LL<<j))
            {
                sum++;
                cnt[v[j]-'a']++;

            }
        }
        if(sum==k)
        {
            string nw=s1;
            for(j=0;j<n;j++)
            {
                if(cnt[s1[j]-'a'])
                {
                    nw[j]=s2[j];
                }
            }

            ll cur=0,sm=0;
            for(j=0;j<n;j++)
            {
                if(nw[j]==s2[j])
                {
                    cur++;
                }
                else
                {
                    sm+=(cur*(cur+1))/2;
                    cur=0;
                }
                if(j==n-1&&nw[j]==s2[j])
                {
                    sm+=(cur*(cur+1))/2;
                }
            }
            ans=max(ans,sm);
            //cout<<nw<<" "<<sm<<"\n";
        }
    }
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




