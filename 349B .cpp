///*Bismillahir Rahmanir Rahim***///
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
const long long  maxval=1e18;
const long long minval=-1e18;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=9;i++)
    {
        cin>>aarray[i];
    }
    sum=0;
    ll curmax=0;
    for(i=1;i<=9;i++)
    {
        k=n/aarray[i];
        if(k>sum)
        {
            sum=k;
            curmax=i;
        }
        if(k==sum&&aarray[i]<aarray[curmax])
        {
            curmax=i;
        }

    }
    for(i=1;i<=sum;i++)
    {
        str+=curmax+'0';
    }
    if(str.size()==0)
    {
        cout<<-1<<"\n";
        return ;
    }
    n-=sum*aarray[curmax];
    //cout<<n<<" "<<str<<endl;
    for(i=0;i<str.size();i++)
    {
        for(j=9;j>=1;j--)
        {
            if(n-aarray[j]+aarray[curmax]>=0&&j>curmax)
            {
                str[i]=j+'0';
                n-=aarray[j];
                n+=aarray[curmax];
                break;
            }
        }
    }
    cout<<str<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
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
