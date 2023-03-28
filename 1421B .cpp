
///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
void solve()
{
    ll n,i,j,k;
    cin>>n;
    char ch[205][205],a,b,c,d;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>ch[i][j];
        }
    }
    vector<pair<ll,ll>>v;
    a=ch[1][2],b=ch[2][1],c=ch[n][n-1],d=ch[n-1][n];
    if(a==b)
    {
        if(c==a)
        {
            v.push_back({n,n-1});
        }
        if(d==a)
        {
             v.push_back({n-1,n});

        }
    }
    else if(c==d)
    {
        if(c==a)
        {
            v.push_back({1,2});
        }
        if(d==b)
        {
             v.push_back({2,1});

        }
    }
    else
    {
        v.push_back({1,2});
        ch[1][2]=ch[2][1];
        if(ch[n-1][n]==ch[1][2])
        {
            v.push_back({n-1,n});
        }
        if(ch[n][n-1]==ch[1][2])
        {
            v.push_back({n,n-1});
        }
    }
    cout<<v.size()<<endl;
    for(auto c:v)
    {
        cout<<c.first<<" "<<c.second<<endl;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
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



