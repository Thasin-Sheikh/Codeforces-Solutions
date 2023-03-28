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
    cin>>str;
    n=str.length();
    vector<ll>e,o;
    for(i=0;i<n;i++)
    {
        if((str[i]-'0')%2)
        {
            o.push_back(str[i]-'0');
        }
        else
        {
            e.push_back(str[i]-'0');
        }
    }
    reverse(o.begin(),o.end());
    reverse(e.begin(),e.end());
    while(1)
    {
        if(o.size()==0)
        {
            while(e.size())
            {
                v.push_back(e.back());
                e.pop_back();
            }
            break;
        }
        else if(e.size()==0)
        {
            while(o.size())
            {
                v.push_back(o.back());
                o.pop_back();
            }
            break;
        }
        else
        {
            if(e.back()<o.back())
            {
                v.push_back(e.back());
                e.pop_back();
            }
            else
            {
                v.push_back(o.back());
                o.pop_back();
            }
        }
    }
    for(auto c:v)
    {
        cout<<c;
    }
    cout<<"\n";
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


