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
string str[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string st;
    bool yes=true;
    vector<ll>v;
    cin>>st;
    n=st.size();
    ans=0;
    ll z=0;
    for(i=0;i<n;i++)
    {
        if(st[i]=='0')
        {
            z++;
        }
        else
        {
            ll val=0;
            for(j=i;j<n;j++)
            {
                val*=2;
                val+=(st[j]-'0');
                if(val>j-i+1+z)
                {
                    break;
                }
                ans++;
            }
            z=0;
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


