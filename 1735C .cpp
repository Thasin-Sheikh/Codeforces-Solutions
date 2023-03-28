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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[26];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
ll  seg[400000+10];
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

}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str,ans;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    cin>>str;
    c=0;
    ll v1[26];
    ll dec[30];

    for(i=0; i<26; i++)
    {
        v1[i]=dec[i]=-1;

    }

    for(i=0; i<n; i++)
    {
        if(dec[str[i]-'a']!=-1)
        {
            ans+=char(dec[str[i]-'a']+'a');
        }
        else
        {
            c++;
            if(v1[str[i]-'a']==-1)
            {
                for(j=0; j<26; j++)
                {
                    if(v1[j]==-1&&j!=(str[i]-'a'))
                    {
                        dec[str[i]-'a']=j;
                        ans+=char(j+97);
                        v1[j]=1;

                        break;
                    }
                }
            }
            else
            {
                for(j=0; j<26; j++)
                {
                    if(v1[j]==-1&&j!=(str[i]-'a'))
                    {
                        if(dec[j]==-1)
                        {
                            dec[str[i]-'a']=j;
                            ans+=char(j+97);
                            v1[j]=1;

                            break;

                        }
                        else
                        {
                            k=dec[j];
                            while(dec[k]!=-1)
                            {
                                k=dec[k];
                            }
                            if(k!=(str[i]-'a'))
                            {
                                dec[str[i]-'a']=j;
                                ans+=char(j+97);
                                v1[j]=1;

                                break;
                            }
                            else if(c==26)
                            {
                                dec[str[i]-'a']=j;
                                ans+=char(j+97);
                                v1[j]=1;

                                break;
                            }
                        }
                    }
                }
            }
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



