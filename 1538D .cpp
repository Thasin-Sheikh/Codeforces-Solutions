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
bool check[100005];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
void getprime()
{
    memset(check,true,sizeof(check));
    int i,j;
    for(i=2; i<=100000; i++)
    {
        if(check[i])
        {
            primes.push_back(i);
            for(j=2*i; j<=100000; j+=i)
            {
                check[j]=false;
            }
        }
    }

}
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    ll a,b;
    cin>>a>>b>>k;
    ll ac=0,bc=0,prea,preb;
    prea=a,preb=b;
    ll pro=1;
    for(i=0; primes[i]*primes[i]<=a; i++)
    {
        if(a%primes[i]==0)
        {
            while(a%primes[i]==0)
            {
                a/=primes[i];
                ac++;
            }
        }
    }
    for(i=0; primes[i]*primes[i]<=b; i++)
    {
        if(b%primes[i]==0)
        {
            while(b%primes[i]==0)
            {
                b/=primes[i];
                bc++;
            }
        }
    }
    if(a>1)
    {
        ac++;
    }
    if(b>1)
    {
        bc++;
    }
    ll matotal=ac+bc;
    ll mitotal;
    //cout<<matotal<<endl;
    if(k>matotal)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    if(k==1)
    {
        if(prea==preb)
        {
            cout<<"NO"<<"\n";
        }
        else if(prea%preb==0||preb%prea==0)
        {
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
        return ;
    }
    if(k>=2&&k<=matotal)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    cout<<"NO"<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    getprime();
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
