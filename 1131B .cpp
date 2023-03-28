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
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
ll a[10000+10],b[10000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    ll f,l;
    cin>>n;
    ll s1,s2;
    s1=0,s2=0;
    ll ans=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        k=min(a[i],b[i]);
        m=max(s1,s2);
        ans+=max(0LL,k-m+1);
        if(s1==s2)
            ans--;
        s1=a[i],s2=b[i];
    }
    cout<<ans+1<<endl;

    return 0;
}



