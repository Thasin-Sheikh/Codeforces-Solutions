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
vector<ll>seg;
ll presum[N];
ll a[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        presum[i]=presum[i-1]+aarray[i];
    }
    set<ll>s;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        s.insert(i);
    }
    sum=0;
    for(i=n; i>1; i--)
    {
        v.push_back(sum);
        if(i==n)
        {
            sum=aarray[a[i]];
        }
        else
        {
            auto it=s.upper_bound(a[i]);
            auto jt=s.lower_bound(a[i]);
            if(jt==s.begin()&&it==s.end())
            {
                sum=max(sum,presum[n]-presum[0]);

            }
            else if(jt==s.begin())
            {
               // cout<<1<<" "<<i<<" "<<*it<<" "<<*jt<<endl;
                sum=max(sum,presum[(*it)-1]-presum[0]);
            }
            else if(it==s.end())
            {
                jt--;
               //cout<<2<<" "<<i<<" "<<*it<<" "<<*jt<<endl;
                sum=max(sum,presum[n]-presum[*jt]);
            }
            else
            {
                jt--;
                //cout<<3<<" "<<i<<" "<<*it<<" "<<*jt<<endl;
                //cout<<presum[*it-1]-presum[*jt]<<endl;
                //cout<<(*it-1)<<" "<<(*jt)<<endl;
                sum=max(sum,presum[*it-1]-presum[*jt]);
            }

        }
        s.erase(a[i]);
    }
    k=presum[a[1]-1];
    k=max(k,presum[n]-presum[a[1]]);
    v.push_back(k);
    for(i=n-1;i>=0;i--)
    {
        cout<<v[i]<<"\n";
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
