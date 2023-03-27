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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str,a,b;
    bool yes=true;
    vector<ll>v;
    cin>>a>>b;
    if(a.size()!=b.size())
    {
        cout<<"NO"<<"\n";
        return ;
    }
    n=a.size();
    if(a==b)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    if(n==1)
    {
        if(a!=b)
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    ll oa=0,ob=0;
    for(i=0;i<n;i++)
    {
        if(a[i]=='1')
        {
            oa++;
        }
        if(b[i]=='1')
        {
            ob++;
        }
    }
    if(oa==0&&ob)
    {
        cout<<"NO"<<"\n";
    }
    else if(ob==0&&oa)
    {
        cout<<"NO"<<"\n";
    }
    else cout<<"YES"<<"\n";
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


