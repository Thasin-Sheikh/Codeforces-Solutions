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
const long MAXN=5e5+10;
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
    vector<string>v;
    ll h1,h2,a1,a2;
    cin>>h1>>a1>>k;
    cin>>h2>>a2;
    ll c=1;
    while(1)
    {
        if(c%2)
        {
            if(h2<=a1)
            {
                v.push_back("STRIKE");
                break;
            }
            else
            {
                if(h1>a2)
                {
                    v.push_back("STRIKE");
                    h2-=a1;

                }
                else
                {
                    v.push_back("HEAL");
                    h1+=k;
                }
            }
            c++;
        }
        else
        {
            h1-=a2;
            c++;
        }
    }
    cout<<v.size()<<"\n";
    for(auto it:v)
    {
        cout<<it<<"\n";
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


