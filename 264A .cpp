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
vector<ll>a,b;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    cin>>str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]=='l')
        {
            a.push_back(i);
        }
        else b.push_back(i);
    }
    if(b.size())
    {
        for(i=0; i<b.size(); i++)
        {
            cout<<b[i]+1<<'\n';
        }
    }
    if(a.size())
    {
        for(i=a.size()-1; i>=0; i--)
        {
            cout<<a[i]+1<<'\n';
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
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}


