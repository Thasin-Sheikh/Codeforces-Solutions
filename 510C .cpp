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
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d;
    string str,ans;
    bool yes=true;
    vector<string>v;
    cin>>n;
    ll cnt[28]= {0};
    ll pos[27];
    for(i=0; i<26; i++)
    {
        pos[i]=0;
    }
    for(i=0; i<n; i++)
    {
        cin>>str;
        v.push_back(str);
    }
    ll cur=0;
    for(i=1; i<n; i++)
    {
        m=min((ll)v[i].size(),(ll)v[i-1].size());
        for(j=0; j<m; j++)
        {
            if(v[i][j]!=v[i-1][j])
            {
                if(cnt[v[i-1][j]-'a']&&cnt[v[i][j]-'a'])
                {
                    if(pos[v[i-1][j]-'a']>pos[v[i][j]-'a'])
                    {
                        //cout<<pos[v[i-1][j]-'a']<<" "<<pos[v[i][j]-'a']<<endl;
                        cout<<"Impossible"<<"\n";
                        return ;
                    }
                }
                else if(cnt[v[i-1][j]-'a']==0&&cnt[v[i][j]-'a']==0)
                {
                    pos[v[i-1][j]-'a']=cur;
                    cur++;
                    ans+=v[i-1][j];
                    pos[v[i][j]-'a']=cur;
                    cur++;
                    ans+=v[i][j];
                    cnt[v[i-1][j]-'a']=cnt[v[i][j]-'a']=1;
                }
                else if(cnt[v[i-1][j]-'a'])
                {
                    ans+=v[i][j];
                    pos[v[i][j]-'a']=cur;
                    cur++;
                    cnt[v[i][j]-'a']=1;
                }
                else
                {
                    cout<<"Impossible"<<"\n";
                    return ;
                }
                break;
            }
            else
            {
                if(cnt[v[i][j]-'a']==0)
                {
                    ans+=v[i][j];
                    cnt[v[i][j]-'a']=1;
                    pos[v[i][j]-'a']=cur;
                    cur++;
                }
            }
        }
        if(j==m)
        {
            if(v[i-1].size()>v[i].size())
            {
                cout<<"Impossible"<<"\n";
                return ;
            }
        }
    }
    for(i=0; i<26; i++)
    {
        if(cnt[i]==0)
        {
            ans+=char('a'+i);
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

