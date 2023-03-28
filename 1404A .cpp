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
vector<ll>v[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n>>k;
    cin>>str;
    for(i=0;i<k;i++)
    {
        if(str[i]=='?')
        {
            for(j=i+k;j<n;j+=k)
            {
                if(str[j]!='?')
                {
                    str[i]=str[j];
                    break;
                }
            }
        }
    }
    for(i=0;i<k;i++)
    {
        if(str[i]!='?')
        {
            for(j=i+k;j<n;j+=k)
            {
                if(str[j]=='?')
                {
                    str[j]=str[i];
                }
                else if(str[i]!=str[j])
                {
                    cout<<"NO"<<"\n";
                    return ;
                }
            }
        }
    }
    ll one=0,zero=0;
    for(i=0;i<k;i++)
    {
        if(str[i]=='1')
        {
            one++;
        }
        else if(str[i]=='0')
        {
            zero++;
        }
    }
    if(one<=k/2&&zero<=k/2)
    {
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
