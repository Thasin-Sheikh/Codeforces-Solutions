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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
            x += 0x9e3779b97f4a7c15;
            x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
            x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
            return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
            static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
            return splitmix64(x + FIXED_RANDOM);
    }
};
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    vector<ll>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    unordered_map<ll, pair<ll, ll>,custom_hash> mp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=v[i]+v[j];
            if(mp.find(sum)!=mp.end())
            {
                ll a,b;
                a=mp[sum].first;
                b=mp[sum].second;
                if(a==i||a==j||b==i||b==j)
                    continue;
                cout<<"YES"<<"\n";
                cout<<a+1<<" "<<b+1<<" "<<i+1<<" "<<j+1<<"\n";
                return ;

            }
            mp[sum]={i,j};
        }
    }
    cout<<"NO"<<"\n";
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


