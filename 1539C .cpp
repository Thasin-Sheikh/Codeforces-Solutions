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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll d;
    cin>>n>>k>>d;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        v.push_back(l);
    }
    ans=0;
    sort(v.begin(),v.end());
    ans=1;
    vector<ll>now;
    ll gr=1;
    for(i=1;i<v.size();i++)
    {
        l=v[i]-v[i-1];
        if(l>d)
        {
            p=l/d;
            if(l%d)
            {
                p++;
            }
            p--;
            gr++;
            now.push_back(p);
        }
        //cout<<i<<" "<<ans<<endl;
    }
    sort(now.begin(),now.end());
    for(i=0;i<now.size();i++)
    {
        if(k>=now[i])
        {
            k-=now[i];
            gr--;
        }
        else break;

    }
    cout<<gr<<"\n";
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

