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
ll a,b;
multiset<pair<ll,ll>>ms;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        ms.insert({b,a});
    }
    ans=0;
    ll buy=0;
    while(ms.size())
    {
        auto it=ms.end();
        it--;
        ll x,y;
        x=it->first;
        y=it->second;
        auto jt=ms.begin();
        ll w,z;
        z=jt->first;
        w=jt->second;
        //cout<<w<<" "<<z<<endl;
        if(buy>=z)
        {
            ans+=w;
            buy+=w;
          //  cout<<1<<" "<<ans<<" "<<buy<<endl;
            ms.erase(ms.find(*ms.begin()));
        }
        else
        {
            ll d=z-buy;
            if(y<d)
            {
                ans+=y*2;
                buy+=y;
            //    cout<<2<<" "<<ans<<" "<<buy<<endl;
                ms.erase(ms.find(*it));
            }
            else
            {
                ans+=2*d;
                buy+=d;
                ms.erase(ms.find(*it));
                y-=d;
                if(y)
                {
                    ms.insert({x,y});
                }
              //  cout<<3<<" "<<ans<<" "<<buy<<endl;
            }
        }
      // cout<<ms.size()<<" "<<ans<<endl;
    }
    cout<<ans<<"\n";
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


