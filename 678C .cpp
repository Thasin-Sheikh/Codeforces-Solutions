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
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b,c1,c2;
    cin>>n>>a>>b>>c1>>c2;
    ll num1,num2,num3;
    num1=n/a;
    num2=n/b;
    ll lcm=a*b/(__gcd(a,b));
    num3=n/lcm;
    ll ans=0;
    if(c1>c2)
    {
        ans+=num1*c1;
        num2-=num3;
        ans+=num2*c2;
    }
    else
    {
        ans+=num2*c2;
        num1-=num3;
        ans+=num1*c1;

    }
    cout<<ans<<endl;
    return 0;
}


