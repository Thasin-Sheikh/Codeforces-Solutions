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
ll magic[101][101];
vector<ll>primes;
bool prime[10001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    dl ans=n-1;
    n--;
    for(i=2; i*i<=n; i++)
    {
        ll f=0;
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
                f=1;
            }
            ans*=(1.0-(1.0/dl(i)));
        }
    }
    if(n>1)
    ans*=(1.0-(1.0/dl(n)));
    cout<<ans<<endl;


    return 0;
}


