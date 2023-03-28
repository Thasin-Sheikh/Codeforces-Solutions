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
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
vector<ll>gt;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m;
    //cout<<gt.size()<<endl;
    if(n==m)
    {
        cout<<0<<"\n";
        return ;
    }
    l=min(n,m);
    r=max(n,m);
    ll dif=r-l;
    for(i=0;i<gt.size();i++)
    {
        if(gt[i]%2==dif%2&&gt[i]>=dif)
        {
            cout<<i+1<<"\n";
            return ;
        }

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
    gt.push_back(1);
    for(i=2;;i++)
    {
        gt.push_back(gt.back()+i);
        if(gt.size()>1000000)
        {
            break;
        }
    }
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


