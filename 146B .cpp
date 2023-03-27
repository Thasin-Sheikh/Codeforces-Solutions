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
vector<ll>p;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll a,b;
void create(ll n)
{
    if(n>100000)
        return;
    a=n*10+4;
    b=n*10+7;
    p.push_back(a);
    p.push_back(b);
    create(a);
    create(b);
}
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string a,str;
    bool yes=true;
    vector<ll>v;
    //create(0);
    cin>>n;
    cin>>a;
    for(i=n+1;;i++)
    {
        str=to_string(i);
        string p;
        for(j=0;j<str.size();j++)
        {
            if(str[j]=='4'||str[j]=='7')
            {
                p+=str[j];
            }
        }
        if(p==a)
        {
            cout<<i<<"\n";
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
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
