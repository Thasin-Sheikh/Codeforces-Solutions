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
map<ll,ll>mp;
ll cnt[N];
priority_queue<pair<ll,ll>>pq;
set<ll>s;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        pq.push({aarray[i],i});
        s.insert(i);
    }
    ll c=1;
    while(s.size()>0)
    {
        pair<ll,ll>x=pq.top();
        if(mp[x.second])
        {
            pq.pop();
        }
        else
        {
            vector<ll>h;
            auto it=s.find(x.second);
            auto kt=it;
            r=m+1;
            while(r)
            {
                h.push_back(*it);
                if(it==s.begin())
                {
                    break;
                }
                it--;
                r--;
            }
            r=m;
            it=kt;
            it++;
            while(r)
            {
                if(it==s.end())
                {
                    break;
                }
                h.push_back(*it);
                it++;
                r--;
            }
            for(auto a:h)
            {
                aarray[a]=c;
                mp[a]++;
                s.erase(a);
            }
            if(c==1)
            {
                c=2;
            }
            else c=1;
        }
    }
    //cout<<s.size()<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<aarray[i];
    }
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
