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
char a[N],b[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    cin>>str;
    if(str[0]=='0'||str[n-1]=='0')
    {
        cout<<"NO"<<"\n";
        return ;
    }
    for(i=0; i<n; i++)
    {
        if(str[i]=='1')
        {
            sum++;
        }
    }
    if(sum%2)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    sum/=2;
    for(i=0; i<n; i++)
    {
        if(str[i]=='1')
        {
            if(sum)
            {
                a[i]=b[i]='(';
                sum--;
            }
            else
            {
                a[i]=b[i]=')';
            }
        }
    }
    ll c=1;
    for(i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            if(c%2)
            {
                a[i]='(';
                b[i]=')';
            }
            else

            {
                a[i]=')';
                b[i]='(';
            }
            c++;
        }
    }
    cout<<"YES"<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<b[i];
    }
    cout<<"\n";
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

