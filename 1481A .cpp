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
    ll i,j,k,m,n,l,r,x,y,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>x>>y;
    cin>>str;
    l=0,r=0;
    ll u=0,d=0;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='L')
        {
            l++;
        }
        else if(str[i]=='R')
        {
            r++;
        }
        else if(str[i]=='D')
        {
            d++;
        }
        else u++;
    }
    if(x>=0)
    {
        if(r<x)
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    else
    {
        if(l<abs(x))
        {
            cout<<"NO"<<"\n";
            return;
        }
    }
    if(y>=0)
    {
        if(u<y)
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    else
    {
        if(d<abs(y))
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    cout<<"YES"<<"\n";
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


