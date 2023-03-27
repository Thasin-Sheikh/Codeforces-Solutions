///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
void seive()
{
    ll i,j,k;
    memset(ok,true,sizeof(ok));
    ok[0]=ok[1]=false;

    for(i=2; i<=N; i++)
    {
        if(ok[i])
        {
            primes.push_back(i);
            for(j=2*i; j<=N; j+=i)
                ok[j]=false;

        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,c=0;
    cin>>n;
    if(n==1)
    {
        cout<<1<<"\n";
        cout<<0<<"\n";
        return 0;
    }
    vector<ll>v;
    t=n;
    for(i=2; i*i<=t; i++)
    {
        ll k=i;
        if(n%k==0)
        {
            while(n%k==0)
            {
                n/=k;
                v.push_back(k);
            }
        }
    }
    if(n>1)
    {
        v.push_back(n);
    }
    c=v.size();
    if(c==1&&n==t)
    {
        cout<<1<<"\n";
        cout<<0<<"\n";
        return 0;
    }
    if(c==2)
    {
        cout<<2<<"\n";
        return 0 ;
    }
    cout<<1<<"\n";
    ll ans=1;
    ans=v[0]*v[1];
    cout<<ans<<"\n";

    return 0;
}



