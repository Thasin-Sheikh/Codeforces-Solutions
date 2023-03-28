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
    vector<ll>a,b;
    cin>>n;
    set<ll>s;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    ll f1=-1,f2=-1;
    ans=n;
    for(i=1;i<=n;i++)
    {
        if(aarray[i]!=f1&&aarray[i]!=f2)
        {
            if(i+1<=n)
            {
                if(aarray[i+1]==f1)
                {
                    f1=aarray[i];
                }
                else
                {
                    f2=aarray[i];
                }
            }
        }
        else if(aarray[i]==f1&&aarray[i]!=f2)
        {
            f2=aarray[i];
        }
        else if(aarray[i]==f2&&aarray[i]!=f1)
        {
            f1=aarray[i];
        }
        else ans--;

    }
    cout<<ans<<"\n";
    return ;
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
        mp.clear();
        solve();
    }
    return 0;
}


