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
    vector<ll>v,v1;
    cin>>n;
    ll cnt[n+5];
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        cnt[i]=0;
    }
    l=1,r=n;
    set<ll>s;
    sum=0;
    while(l<=r)
    {
        if(aarray[l]!=aarray[r])
        {
            sum++;
            break;

        }
        l++;
        r--;
    }
    if(sum==0)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    for(i=1; i<=n; i++)
    {
        if(aarray[i]!=aarray[n-i+1])
        {
            vector<ll>a,b;
            for(j=1; j<=n; j++)
            {
                if(aarray[j]!=aarray[i])
                {
                    a.push_back(aarray[j]);

                }
                if(aarray[j]!=aarray[n-i+1])
                {
                    b.push_back(aarray[j]);
                }
            }
            l=0,r=a.size()-1;
            ll f=1;
            while(l<=r)
            {
                if(a[l]!=a[r])
                {
                    f=0;
                    break;
                }
                l++,r--;
            }
            if(f)
            {
                cout<<"YES"<<"\n";
                return ;
            }
            l=0,r=b.size()-1;
            f=1;
            while(l<=r)
            {
                if(b[l]!=b[r])
                {
                    f=0;
                    break;
                }
                l++,r--;
            }
            if(f)
            {
                cout<<"YES"<<"\n";
                return ;
            }
            cout<<"NO"<<"\n";
            return ;
        }
    }
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

