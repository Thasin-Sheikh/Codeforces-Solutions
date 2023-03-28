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
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='*')
        {
            str[i]='X';
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(str[i]=='*')
        {
            str[i]='X';
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(str[i]=='X')
        {
            if(i+k>=n)
            {
                break;
            }
            for(j=i+k;j>i;j--)
            {
                if(str[j]=='*'||str[j]=='X')
                {
                    str[j]='X';
                    break;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(str[i]=='X')
        {
            sum++;
        }
    }
    cout<<sum<<"\n";
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


