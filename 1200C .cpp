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
    ll i,j,n,m,k,t;
    ll a,b,c,d;
    cin>>n>>m>>t;
    ll g=__gcd(n,m);
    while(t--)
    {
        cin>>a>>b>>c>>d;
        b--,d--;
        if(a==1)
            b=(b/(n/g));
        else b=(b/(m/g));
        if(c==1)
        {
            d=(d/(n/g));
        }
        else d=(d/(m/g));
        if(b==d)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}


