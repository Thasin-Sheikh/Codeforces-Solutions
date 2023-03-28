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
    vector<ll>v1,v2,v3,v4;
    cin>>n;
    ll sq=0,nsq=0;
    ll z=0;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        k=sqrt(l);
        if(k*k==l)
        {
            sq++;
            if(l==0)
            {
                z++;
            }
        }
        else
        {
            nsq++;
            ll a=l-k*k;
            k++;
            p=k*k;
            ll b=p-l;
            b=min(a,b);
            v1.push_back(b);
        }
    }
    sort(v1.begin(),v1.end());
    /*cout<<sq<<" "<<nsq<<endl;
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<endl;
    }*/
    if(sq==nsq)
    {
        cout<<0<<"\n";
        return ;
    }
    if(sq>nsq)
    {
        m=n/2;
        ll noz=sq-z;
        ll ex=sq-m;
        if(noz>=ex)
        {
            ans=ex;
        }
        else
        {
            ans=noz+(ex-noz)*2;
        }
        cout<<ans<<"\n";
        return ;
    }
    if(sq<nsq)
    {
        m=n/2;
        ll ex=nsq-m;
        for(i=0;i<ex;i++)
        {
            sum+=v1[i];
        }
        cout<<sum<<"\n";
        return ;
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
