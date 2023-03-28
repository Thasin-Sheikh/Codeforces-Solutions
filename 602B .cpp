///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
ll n;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,m,k,t;
    ll ans=0;
    cin>>n;
    ll l=1,r=n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=n;)
    {
        k=min(aarray[i],aarray[i+1]);
        m=max(aarray[i],aarray[i+1]);
        j=i+1;
        ll c=0;
        ll ses;
        ll f=0;
        if(aarray[j]!=aarray[i])
            ses=j,f=1;
        while(m-k<=1&&j<=n)
        {
            c++;
            j++;
            if(aarray[j]!=aarray[i]&&f==0)
            ses=j,f=1;
            k=min(k,aarray[j]);
            m=max(m,aarray[j]);

        }
        i=ses;
        ans=max(ans,c+1);
         if(j==n+1)
            break;
    }
    cout<<ans<<endl;
    return 0;
}
