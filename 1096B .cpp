///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 998244353
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    cin>>str;
    ll f1,f2;
    for(i=0;i<str.length();i++)
    {
        if(str[i]!=str[0])
        {
            f1=i;
            break;
        }
    }
    for(i=str.length()-1;i>=0;i--)
    {
        if(str[i]!=str[str.length()-1])
        {
            f2=n-i-1;
            break;
        }
    }
    ll c;
    if(str[0]==str[n-1])
    {
        c=1;
    }
    else c=0;
    //cout<<f1<<" "<<f2<<endl;
    ll ans=1+f1+f2+(1LL*c*f1*f2)%MOD;
    ans%=MOD;
    cout<<ans<<endl;

    return 0;
}


