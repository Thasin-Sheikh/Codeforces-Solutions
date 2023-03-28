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
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll n0,n1,n2;
    cin>>n0>>n1>>n2;
    if(n0&&n1&&n2)
    {
        for(i=1; i<=n0+1; i++)
        {
            str+='0';
        }
        for(i=1; i<=n2+1; i++)
        {
            str+='1';
        }
        n1--;
        if(n1)
        {
            str+='0';
            n1--;
        }
        ll c=1;
        while(n1--)
        {
            if(c%2)
            {
                str+='1';
            }
            else

                str+='0';
            c++;
        }
        cout<<str<<"\n";
        return ;
    }
    if(n0&&n1&&(!n2))
    {
        for(i=1; i<=n0+1; i++)
        {
            str+='0';
        }
        ll c=1;
        n1--;
        str+='1';
        while(n1--)
        {
            if(c%2)
            {
                str+='0';
            }
            else
                str+='1';
            c++;
        }
        cout<<str<<"\n";
        return ;
    }
    if(n1&&n2&&(!n0))
    {
        for(i=1;i<=n2+1;i++)
        {
            str+='1';
        }
        ll c=1;
        while(n1--)
        {
            if(c%2)
            {
                str+='0';
            }
            else
            {
                str+='1';
            }
            c++;
        }
        cout<<str<<"\n";
        return ;
    }
    if(n0==0&&n1==0&&n2)
    {
        for(i=1;i<=n2+1;i++)
        {
            cout<<1;
        }
        cout<<"\n";
        return ;
    }
    if(n0==0&&n2==0&&n1)
    {
        str+='0';
        str+='1';
        n1--;
        ll c=1;
        while(n1--)
        {
            if(c%2)
            {
                str+='0';
            }
            else
            {
                str+='1';
            }
            c++;
        }
        cout<<str<<"\n";
        return ;
    }
    if(n1==0&&n2==0&&n0)
    {
        for(i=1;i<=n0+1;i++)
        {
            cout<<0;
        }
        cout<<"\n";
        return ;
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

