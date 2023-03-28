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
int aarray[N];
int magic[R][R];
vector<ll>primes;
bool check[1000001];
int large[10000005];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll a,b;
    cin>>n>>a>>b;
    cin>>str;
    l=max(a,b);
    r=min(a,b);
    ans=0;
    str+='*';
    ll d=0;
    for(i=0; i<=n; i++)
    {
        if(str[i]=='.')
        {
            d++;
        }
        else
        {
            v.push_back(d);
            d=0;
        }
    }
    sort(v.rbegin(),v.rend());
    for(i=0;i<v.size();i++)
    {
        k=v[i]/2;
        if(v[i]%2==0)
        {
            ans+=min(a,k);
            a-=min(a,k);
            ans+=min(b,k);
            b-=min(b,k);
        }
        else
        {
            if(a>b)
            {
                ll p=min(a,(v[i]+1)/2);
                ans+=p;
                a-=p;
                p=min(b,v[i]/2);
                ans+=p;
                b-=p;
            }
            else
            {
                ll p=min(b,(v[i]+1)/2);
                ans+=p;
                b-=p;
                p=min(a,v[i]/2);
                ans+=p;
                a-=p;
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


