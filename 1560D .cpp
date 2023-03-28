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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
vector<ll>v;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    ans=100;
    for(i=0; i<v.size(); i++)
    {
        k=v[i];
        string aa,bb;
        aa=to_string(k);
        bb=to_string(n);
        p=0;
        ll sam=0;
        //cout<<aa<<" "<<bb<<endl;
        for(j=0;j<bb.size();j++)
        {
            if(p>=aa.size())
            {
                break;
            }
            if(bb[j]==aa[p])
            {
                sam++;
                p++;
            }
        }
        //cout<<aa<<" "<<sam<<endl;
        ans=min(ans,ll(bb.size()-sam)+ll(aa.size()-sam));
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
    for(i=0; i<=60; i++)
    {
        k=(1LL<<i);
        // cout<<k<<endl;
        v.push_back(k);
    }
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

