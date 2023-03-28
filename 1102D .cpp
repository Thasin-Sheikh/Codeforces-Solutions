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
    cin>>n;
    cin>>str;
    for(i=0; i<n; i++)
    {
        mp[str[i]-'0']++;
    }
    ll eq=n/3;
    if(mp[0]>eq)
    {

        for(i=n-1; i>=0; i--)
        {
            if(str[i]=='0')
            {
                if(mp[2]<eq)
                {
                    str[i]='2';
                    mp[2]++;
                    mp[0]--;
                }
                else
                {
                    str[i]='1';
                    mp[1]++;
                    mp[0]--;
                }
            }
            if(mp[0]==eq)
            {
                break;
            }
        }
    }
    if(mp[1]>eq)
    {
        ll f=0;
        for(i=0; i<n; i++)
        {
            if(str[i]=='1')
            {
                if(mp[0]<eq)
                {
                    mp[0]++;
                    str[i]='0';
                    mp[1]--;
                }
            }
            if(mp[1]==eq)
            {
                f=1;
                break;
            }
        }
        if(!f)
        {
            for(i=n-1; i>=0; i--)
            {
                if(str[i]=='1')
                {
                    if(mp[2]<eq)
                    {
                        str[i]='2';
                        mp[2]++;
                        mp[1]--;
                    }
                }
                if(mp[1]==eq)
                {
                    break;
                }
            }
        }
    }
    if(mp[2]>eq)
    {
        for(i=0; i<n; i++)
        {
            if(str[i]=='2')
            {
                if(mp[0]<eq)
                {
                    mp[0]++;
                    str[i]='0';
                    mp[2]--;
                }
                else
                {
                    mp[1]++;
                    str[i]='1';
                    mp[2]--;
                }
            }
            if(mp[2]==eq)
            {
                break;
            }
        }
    }
    cout<<str<<"\n";
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
