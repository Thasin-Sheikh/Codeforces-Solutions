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
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll p[1000005],s[1000005];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>str;
    ll c=0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='(')
        {
            c++;
        }
        else c--;
        p[i]=s[i]=c;
    }
    for(i=n-2;i>=0;i--)
    {
        s[i]=min(s[i],s[i+1]);
    }
    ans=0;
    //for(i=0;i<n;i++)
    //{
      ///  cout<<s[i]<<endl;
   // }
    for(i=0;i<n;i++)
    {
        if(str[i]=='(')
        {
            if(p[n-1]-2==0&&s[i]-2==0)
            {
                ans++;
            }
        }
        if(str[i]==')')
        {
            if(p[n-1]+2==0&&s[i]+2==0)
            {
                //cout<<i<<endl;
                ans++;
            }
        }
        if(p[i]<0)
        {
            break;
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
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
