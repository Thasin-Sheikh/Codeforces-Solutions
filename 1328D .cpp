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
    ll i,j,k,m,n,l,r,q,p,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    set<ll>s;
    ll ans[n+5];
    ans[0]=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        ans[i]=0;
        s.insert(aarray[i]);
    }
    if(s.size()==1)
    {
        cout<<1<<"\n";
        for(i=1; i<=n; i++)
        {
            cout<<1<<" ";
        }
        cout<<"\n";
        return ;
    }
    if(n%2==0||aarray[1]==aarray[n])
    {
        cout<<2<<"\n";
        for(i=1; i<=n; i++)
        {
            if(i%2)
            {
                cout<<1<<" ";
            }
            else cout<<2<<" ";
        }
        cout<<"\n";
        return ;
    }
    ll c=0;
    for(i=2; i<=n; i++)
    {
        if(aarray[i]==aarray[i-1])
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<3<<"\n";
        cout<<3<<" ";
        for(i=2; i<=n; i++)
        {
            if(i%2==0)
            {
                cout<<1<<" ";
            }
            else cout<<2<<" ";
        }
        cout<<"\n";
        return ;
    }
    ll cur=1;
    ll fl=0;
    cout<<2<<"\n";
    for(i=1; i<=n; i++)
    {
        if(aarray[i]==aarray[i-1])
        {
            if(fl==0)
            {
                ans[i]=ans[i-1];
                fl++;
            }
            else
            {
                if(cur%2)
                {
                    ans[i]=1;
                }
                else ans[i]=2;
                cur++;

            }
        }
        else
        {
            if(cur%2)
            {
                ans[i]=1;
            }
            else ans[i]=2;
            cur++;

        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
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

