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
    ll i,j,n,m,k,l,sum=0,ans=0;
    string str;
    bool yes=true;
    cin>>str;
    ll o1=0,o2=0;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='(')
        {
            o1++;
        }
        else if(str[i]==')')
        {
            if(o1>0)
            {
                ans++;
                o1--;
            }
            else
            {
                o1=0;
            }
        }
        else if(str[i]=='[')
        {
            o2++;
        }
        else
        {
            if(o2>0)
            {
                ans++;
                o2--;
            }
            else
            {
                o2=0;
            }
        }
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

