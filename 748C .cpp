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
    ll l=0,u=0,r=0,d=0,ans=0;
    cin>>n>>str;
    i=0;
    if(str[i]=='R')
    {
        r++;

    }
    else if(str[i]=='L')
    {
        l++;
    }
    else if(str[i]=='U')
    {
        u++;
    }
    else d++;
    ans++;

    for(i=1; i<str.length(); i++)
    {
        if(str[i]=='L')
        {
            if(r)
            {
                ans++;
                l=1;
                r=0;
            }
            else
                l++;
        }
        if(str[i]=='R')
        {
            if(l)
            {
                ans++;
                l=0;
                r=1;
            }
            else
                r++;
        }
        if(str[i]=='U')
        {
            if(d)
            {
                ans++;
                d=0;
                u=1;
            }
            else u++;
        }
        if(str[i]=='D')
        {
            if(u)
            {
                ans++;
                u=0;
                d=1;
            }
            else d++;
        }
    }
    cout<<ans<<endl;

    return 0;
}



