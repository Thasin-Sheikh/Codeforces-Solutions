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
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
ll cnt[N];
vector<ll>v[N];
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    cin>>n;
    p=0;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        cnt[aarray[i]]++;
        if(cnt[aarray[i]]>1)
        {
            p++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(aarray[aarray[i]]==i)
        {
            continue;
        }
        else
        {
            sum++;
            break;
        }
    }
    if(sum==0)
    {
        cout<<1<<"\n";
        return ;
    }
    if(p)
    {
        cout<<-1<<"\n";
        return ;
    }
    ans=0;
    vector<ll>a;
    for(i=1;i<=n;i++)
    {
        if(vis[aarray[i]])
        {
            continue;
        }
        else
        {
            k=aarray[i];
            ll cur=0;
           // cout<<k<<" ";
            while(vis[k]==0)
            {
                vis[k]=1;
                //cout<<k<<" ";
                k=aarray[aarray[k]];
                cur++;
            }
            //cout<<cur<<endl;
            a.push_back(cur);
        }
    }
    //cout<<ans<<"\n";
    ll lcm=a[0];
    ll g=lcm;
    for(i=1;i<a.size();i++)
    {
        g=__gcd(lcm,a[i]);
        lcm=((lcm*a[i])/g);
    }
cout<<lcm<<endl;
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
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

