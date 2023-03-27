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
const int N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
vector<ll>v[N];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    k=2*3*5*7;
    if(n<3)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(n==3)
    {
        cout<<210<<endl;
        return 0;
    }
    k=n%6;
    if(k==1)
    {
        cout<<1;
        for(i=1; i<=n-3; i++)
        {
            cout<<0;
        }
        cout<<20<<endl;
    }
    if(k==2)
    {
        cout<<1;
        for(i=1; i<=n-4; i++)
        {
            cout<<0;
        }
        cout<<200<<endl;
    }
    if(k==3)
    {
        cout<<1;
        for(i=1; i<=n-4; i++)
        {
            cout<<0;
        }
        cout<<110<<endl;
    }
    if(k==4)
    {
        cout<<1;
        for(i=1; i<=n-3; i++)
        {
            cout<<0;
        }
        cout<<50<<endl;
    }
    if(k==5)
    {
        cout<<1;
        for(i=1; i<=n-3; i++)
        {
            cout<<0;
        }
        cout<<80<<endl;
    }
    if(k==0)
    {
        cout<<1;
        for(i=1; i<=n-4; i++)
        {
            cout<<0;
        }
        cout<<170<<endl;
    }
    return 0;
}




