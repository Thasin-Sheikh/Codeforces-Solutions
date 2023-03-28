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
ll aarray[400000+100];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    if(n==1)
    {
        cout<<aarray[1]<<"\n";
        return ;
    }
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            if(aarray[i]>aarray[i+1])
            {
                ll d=aarray[i]-aarray[i+1];
                aarray[i]=aarray[i+1];
                sum+=d;

            }
        }
        if(i==n)
        {
            if(aarray[i]>aarray[i-1])
            {
                ll d=aarray[i]-aarray[i-1];
                aarray[i]=aarray[i-1];
                sum+=d;
            }
        }
        else
        {
            m=max(aarray[i-1],aarray[i+1]);
            if(aarray[i]>m)
            {
                sum+=aarray[i]-m;
                aarray[i]=m;

            }
        }
    }
   // cout<<sum<<endl;
    sum+=aarray[1]+aarray[n];
    /*for(i=1;i<=n;i++)
    {
        cout<<aarray[i]<<" ";
    }*/
    for(i=2;i<n;i++)
    {
        sum+=max(0LL,aarray[i]-aarray[i-1]);
        sum+=max(0LL,aarray[i]-aarray[i+1]);

    }
    cout<<sum<<"\n";
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

