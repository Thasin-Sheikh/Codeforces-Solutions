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
vector<pair<ll,ll>>ans;
map<ll,ll>mp;
stack<ll>st;
ll f=0;
ll k;
ll len=0;
ll fi=0;
void solve()
{
    ll i,j,m,n,l,r,q,p,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    set<ll>s;
    m=0;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        s.insert(l);
        m=max(m,l);
        ed[l].push_back(i);
        if(l==0)
        {
            a=i;
            sum++;
        }
    }
    if((m+1)!=s.size())
    {
        cout<<-1<<"\n";
        return;
    }
    if(sum>1||sum==0)
    {
        cout<<-1<<"\n";
        return ;
    }
    if(ed[1].size()>k)
    {
        cout<<-1<<"\n";
        return ;
    }

    for(i=0; i<ed[1].size(); i++)
    {
        ans.push_back({a,ed[1][i]});
        st.push(ed[1][i]);

    }
    ll cur=2;
    while(st.size())
    {
        a=k-1;
        a*=st.size();
        stack<ll>ex;
        if(a<ed[cur].size())
        {
            cout<<-1<<"\n";
            return ;
        }
        while(st.size()&&ed[cur].size())
        {
            b=st.top();
            st.pop();
            a=k-1;
            //cout<<a<<" "<<b<<endl;
            while(a>0&&ed[cur].size()>0)
            {
                ans.push_back({b,ed[cur].back()});
                ex.push(ed[cur].back());
                ed[cur].pop_back();
                a--;
            }
        }
        st.empty();
        st=ex;
        cur++;
    }
    if(ans.size()==0)
    {
        cout<<-1<<"\n";
        return ;
    }
    cout<<ans.size()<<"\n";
    for(i=0; i<ans.size(); i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

