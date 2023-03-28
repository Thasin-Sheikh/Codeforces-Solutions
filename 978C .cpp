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
const int N = 2e5 + 10;
ll aarray[200000+10];
ll dor[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll n,m,i,j,a,b,k,ans;
    cin>>n>>m;
    aarray[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        aarray[i]=aarray[i-1]+a;
    }
    for(i=1;i<=m;i++)
    {
        ll c;
        cin>>c;
        b=lower_bound(aarray,aarray+n+1,c)-aarray;
        k=c-aarray[b-1];
        cout<<b<<" "<<k<<endl;
    }

    return 0;
}


