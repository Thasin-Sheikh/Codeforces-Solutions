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
/*ll  seg[400000+10];
void build(ll node,ll st,ll en)
{
    if(st==en)
    {
        seg[node]=aarray[st];
        return ;
    }
    ll mid=(st+en)/2;
    ll lft=node*2;
    ll rght=node*2+1;
    build(lft,st,mid);
    build(rght,mid+1,en);
    seg[node]=min(seg[lft],seg[rght]);
    return ;
}
ll query(ll node,ll st,ll en,ll l,ll r)
{
    if(st>=l&&en<=r)
    {
        return seg[node];
    }
    if(r<st||l>en)
    {
        return INT_MAX;
    }
    ll mid=(st+en)/2;
    ll lft=2*node;
    ll rght=2*node+1;
    ll ret=query(lft,st,mid,l,r);
    ll ret1=query(rght,mid+1,en,l,r);
    return min(ret,ret1);

}*/
map<string,ll>ans;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str,gb;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    cin>>gb;
    cin>>k;
    string cur="";
    ll bad=k;
    queue<ll>Q;
    n=str.size();
    for(i=0; i<=n;)
    {
        //cout<<i<<"\n";
        if(i<n&&gb[str[i]-'a']=='0')
        {
            if(bad)
            {
                cur+=str[i];
                bad--;
                Q.push(i);
                i++;
            }
            else
            {
                if(cur.size())
                {
                    ll len=cur.size();
                    string now;
                    for(j=0; j<len; j++)
                    {
                        now="";
                        now+=cur[j];
                        ans[now]++;
                        for(k=j+1; k<len; k++)
                        {
                            now+=cur[k];
                            ans[now]++;

                        }
                    }
                }
                if(k)
                {
                    bad++;
                }
                if(Q.size())
                {
                    //bad++;
                    a=Q.front();
                    //cout<<a<<"\n";
                    Q.pop();
                    string neww;
                    for(j=a+1; j<i; j++)
                    {
                        neww+=str[j];
                    }
                    cur=neww;
                }
                else
                {
                    cur="";
                }
            }
        }
        else if(i<n)
        {
            cur+=str[i];
            i++;
        }
        if(i==n)
        {
            if(cur.size())
            {
                ll len=cur.size();
                string now;
                for(j=0; j<len; j++)
                {
                    now="";
                    now+=cur[j];
                    ans[now]++;
                    for(k=j+1; k<len; k++)
                    {
                        now+=cur[k];
                        ans[now]++;

                    }
                }
            }
            bad++;
            if(Q.size())
            {
                a=Q.front();
                //cout<<a<<"\n";
                Q.pop();
                string neww;
                for(j=a+1; j<i; j++)
                {
                    neww+=str[j];
                }
                cur=neww;
            }
            else
            {
                cur="";
            }
            break;
        }

        //cout<<i<<" "<<cur<<'\n';
    }
    /*for(auto it:ans)
    {
        cout<<it.first<<"\n";
    }*/
    cout<<ans.size()<<"\n";
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




