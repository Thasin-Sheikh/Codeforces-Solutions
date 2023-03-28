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
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<pair<ll,ll>,vector<ll>>mp;
multiset<ll>s[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>v,ans;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>l>>r;
        mp[ {r,l}].push_back(i);
        aarray[l]++;
        aarray[r+1]--;
        s[r].insert(l);
    }
    for(i=1; i<=200001; i++)
    {
        aarray[i]+=aarray[i-1];
    }
    for(i=1; i<=200001; i++)
    {
        while(aarray[i]>k)
        {
            ll a,b;
            for(j=i; j<=200001; j++)
            {
                if(s[j].size()==0)
                {
                    continue;
                }
                if(s[j].size()!=0)
                {
                    auto it=s[j].begin();
                    if(*it<=i)
                    {
                        a=*it;
                        b=j;
                    }

                }
            }
            s[b].erase(s[b].begin());
            ans.push_back(mp[{b,a}].back());
            mp[{b,a}].pop_back();
            for(ll p=a; p<=b; p++)
            {
                aarray[p]--;
            }
        }
    }
    cout<<ans.size()<<"\n";
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
