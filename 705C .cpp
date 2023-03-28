///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
ll tot=0,two[N],three[N];
set<pair<ll,ll>>sp;
set<ll>s[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>q;
    ll tp,val;
    ll cur=1;
    for(i=1;i<=q;i++)
    {
        cin>>tp>>val;
        if(tp==1)
        {
            sum++;
            sp.insert({cur,val});
            s[val].insert(cur);
            cur++;
        }
        if(tp==2)
        {
            sum-=(ll)s[val].size();
            for(auto it:s[val])
            {
                two[it]++;
            }
            s[val].clear();
        }
        if(tp==3)
        {
            while(sp.size())
            {
                auto it=sp.begin();
                l=it->first;
                r=it->second;
               // cout<<l<<" "<<r<<endl;
                if(l<=val)
                {
                    if(two[l]==0)
                    {
                        two[l]++;
                        sum--;
                        s[r].erase(s[r].begin());
                    }
                    sp.erase(*it);
                }
                else
                    break;
            }
        }
        cout<<sum<<endl;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

