///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v,ans;
    cin>>n;
    stack<ll>st;
    ll cnt[n+1],pcount[n+5];
    ll pre=0;
    for(i=0; i<=n; i++)
    {
        pcount[i]=cnt[i]=0;
    }
    for(i=0; i<n; i++)
    {
        cin>>l;
        cnt[l]++;
        v.push_back(l);
    }
    sort(v.begin(),v.end());
    for(i=0; i<=n; i++)
    {
        ll cur=cnt[i];
        if(i==0)
        {
            ans.push_back(cur+pre);
        }
        else
        {
            l=i-1;
            if(cnt[l])
            {
                //cout<<2<<" "<<i<<" "<<cur+pre<<endl;
                ans.push_back(cur+pre);
            }
            else
            {
                //cout<<i<<endl;
                if((ll)st.size()==0)
                {
                    //cout<<i<<endl;
                    for(j=i; j<=n; j++)
                    {
                        ans.push_back(-1);
                    }
                    break;
                }
                else
                {
                    p=st.top();
                    st.pop();
                    ll op=l-p;
                    pre+=op;
                    cur+=pre;
                    //cout<<3<<" "<<i<<" "<<cur<<endl;
                    ans.push_back(cur);
                }
            }
        }
        while(cnt[i]>1)
        {
            st.push(i);
            cnt[i]--;
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
    //no test case in interactive ,check it idiot
    //never use pow func directly
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

