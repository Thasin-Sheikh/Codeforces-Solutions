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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,ans,sum=0;
    string str,a,b;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    cin>>a>>b;
    ans=0;
    for(i=0;i<n/2;i++)
    {
        map<char,ll>ch;
        ch[a[i]]++;
        ch[a[n-i-1]]++;
        ch[b[i]]++;
        ch[b[n-i-1]]++;
        if(ch.size()==4)
        {
            ans+=2;
        }
        else if(ch.size()==3)
        {
            if(a[i]==a[n-i-1])
            {
                ans+=2;
            }
            else ans+=1;
        }
        else if(ch.size()==2)
        {
            if(ch[a[i]]==1||ch[a[i]]==3)
            {
                ans++;
            }
        }
    }
    if(n%2&&a[n/2]!=b[n/2])
    {
        ans++;
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

